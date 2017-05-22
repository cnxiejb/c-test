#include<iostream>
#include "vector_test.hpp"
#include "printTools.hpp"

using namespace std;

Solution::Solution()
{
    std::cout<<"solution init"<<std::endl;
    coll.reserve(80);
    std::cout<<"vector size = "<<coll.size()<<std::endl;
    std::cout<<"vector max_size = "<<coll.max_size()<<std::endl;
    
    for(int i=1;i < 10;i++)
    {
        s_data.push_back(i*2+1);
    }
}
void Solution::SPrintf()
{
    //method 1
    for(auto &elemt : s_data)
    {
        std::cout<<elemt<<",";
    }
    std::cout<<std::endl;

    //method2
    for_each(s_data.begin(),s_data.end(),PrintfInt());
    std::cout<<std::endl;
    
    //method3
    for(auto iter=s_data.begin();iter != s_data.end();++iter)
    {
        cout<<*iter<<",";
    }
    cout<<endl;
}
