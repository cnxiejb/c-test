#ifndef TEST_ARRAY1_H_
#define TEST_ARRAY1_H_
#include<array>
#include<algorithm>
#include<functional>
#include<numeric>
#include<iostream>

void printf_array(std::array<int,10> &data)
{
    for(std::array<int,10>::iterator it=data.begin();it != data.end();it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;
}
void test_array1()
{
    std::array<int,10> a={11,22,33,44,55,66,77,88,99};
    printf_array(a);

    a.back()= 999999;
    a[a.size()-2] =66;
    printf_array(a);

    std::cout<<"sum"
        <<std::accumulate(a.begin(),a.end(),0)
        <<std::endl;

    std::transform(a.begin(),a.end(),a.begin(),std::negate<int>());
    printf_array(a);

}
#endif
