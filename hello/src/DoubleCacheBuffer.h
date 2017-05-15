#ifndef _DOUBLECACHEBUFFER_H_
#define _DOUBLECACHEBUFFER_H_
#include<mutex>
#include<memory>
#include<chrono>

template<class T> class DoubleCacheBuffer
{
    public:
        class Buffer
        {
            private:
                std::mutex data_mutex;
                std::shared_ptr<T> data;
                int buffer_size;
                int64_t timedump;
                int64_t base;
            public:
                Buffer(int size)
                    :buffer_size(size)
                {
                    data.reset(new T[buffer_size],[](T *p){delete[]p;});
                    InitBase();
                }
                int getBuffersize()
                {
                    return buffer_size;
                }
                T* getbuffer()
                {
                    return data.get();
                }
            private:
                void InitBase()
                {

                }
                void push(Buffer *pdata)
                {
                    std::lock_guard<std::mutex> lock(data_mutex);
                    memcpy(*data,pdata->getbuffer(),pdata->getBuffersize());
                    setTimedump();
                }
                void pull(Buffer *pdata)
                {
                    std::lock_guard<std::mutex> lock(data_mutex);
                    memcpy(pdata->getbuffer(),(*data),buffer_size);
                    timedump = 0xffffffffffffffff;
                }
                void setTimedump()
                {
                    
                }
                 int64_t getTimedump()
                {
                    return timedump;
                }
        };
        DoubleCacheBuffer(int size)
            :cache_size(size),
            a(std::make_shared<Buffer>(size)),
            b(std::make_shared<Buffer>(size))
        {
        }
        DoubleCacheBuffer()=delete;
        int getCacheSize()
        {
            return cache_size;
        }
        void producte(Buffer* pdata)
        {
            if(a->getTimedump() >= b->getTimedump())
                a->push(pdata);
            else
                b->push(pdata);
        }
        void consume(Buffer* pdata)
        {
            if(a->getTimedump() < b->getTimedump())
                a->pull(pdata);
            else
                b->pull(pdata);
        }
    private:
        int cache_size;
        std::shared_ptr<Buffer> a;
        std::shared_ptr<Buffer> b;
};
#endif
