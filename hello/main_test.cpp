#include<unordered_map>
#include<iostream>
#include<thread>
#include<deque>

#include "AbstractCar.hpp"
#include "src/Test.hpp"
#include "src/Dog.hpp"

#include "stlTest/array1.hpp"

#include "src/DoubleCacheBuffer.h"
int main_test()
{
    std::cout<<"main test local function"<<std::endl;
    std::cout<<"thread id "<<std::this_thread::get_id()<<std::endl;

    int data[]={1,0,1,2,2,1,0,0,3,0,1,1,0,4};
    int len=sizeof(data)/sizeof(data[0]);
    bool bcontinue = false;
    int size =0;
    for(int i=0;i < len;i++)
    {
        if(data[i]==0)
        {
            if(bcontinue)
                bcontinue = false;
            continue;
        }
        else
        {
            if(bcontinue)
                continue;
            else
            {
                bcontinue = true;
                size++;
            }
        }
    }
    std::cout<<"size="<<size<<std::endl;
    return size;
}
void my_test()
{
    int *pi;
    char *c;
    char *ddd="dj";
    char a[100]="dfd";
    char b[100];
    c=b;
    std::cout<<"thread id "<<std::this_thread::get_id()<<std::endl;
}
void test_deque()
{
    std::deque<int> data={7,5,16,8};

    data.push_back(13);
    data.push_front(25);

    for(auto n:data){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
}
int flip_test(int n)
{
    unsigned int mask = ~0;
    while(n & mask)
        mask <<= 1;
    return ~n & ~mask;
}
int main()
{
    std::thread t(main_test);
    t.join();
    DoubleCacheBuffer<char> buffer(64);
    //my_test();
    //std::cout<<std::thread::hardware_concurrency()<<std::endl;
    //test_deque();
    test_array1();
    std::cout<<"flip test = "<<flip_test(5)<<std::endl;
}
