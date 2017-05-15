#ifndef _TEST_H_
#define _TEST_H_
class BaseTest
{
    public:
        void baseTest();
        virtual ~BaseTest(){};
};

class Test : public BaseTest
{
    public:
        Test();
        virtual ~Test();

        int ExcTest();
        int getStaticNumber();
        virtual void virTest();
        static void staticTest();
        
    private:
        int ImpTest();
        
    private:
        static int static_number;
        int number;
};
#endif
