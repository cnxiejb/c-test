#include<algorithm>
#include<iostream>

#include "vector_test.hpp"
#include "../tools/printTools.hpp"

using namespace std;

XieVector::XieVector()
{
    std::cout<<"XieVector init"<<std::endl;
    vdataInt.reserve(80);
    printfClassInfo();

    vdataInt={1,3,4,6,8,9,0};
    
    for(int i=1;i < 10;i++)
    {
        vdataInt.push_back(i*2+1);
    }
    vdataInt.shrink_to_fit();
    printfClassInfo();
}
XieVector::~XieVector()
{
    cout<<"XieVector uninit"<<endl;
    vdataInt.clear();
    printfClassInfo();
}
void XieVector::printfClassInfo()
{
    cout<<endl;
    std::cout<<"vector size = "<<vdataInt.size()<<std::endl;
    std::cout<<"vector capacity = "<<vdataInt.capacity()<<std::endl;
    cout<<"vector max_size = "<<vdataInt.max_size()<<endl;
    cout<<"vector is empty = "<<vdataInt.empty()<<endl;
}
void XieVector::removeEqualVal(int val)
{
    vdataInt.erase(remove(vdataInt.begin(),vdataInt.end(),val),vdataInt.end());
}
void XieVector::SPrintf()
{
    //method 1
    for(auto &elemt : vdataInt){
        std::cout<<elemt<<",";
    }
    std::cout<<std::endl;

    removeEqualVal(3);
    //method2
    PrintfTool<decltype(vdataInt)> xie_printf;
    xie_printf(vdataInt);
    
    //method3
    for(auto iter=vdataInt.begin();iter != vdataInt.end();++iter){
        cout<<*iter<<",";
    }
    cout<<endl;
}
