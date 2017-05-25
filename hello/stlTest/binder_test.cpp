#include "binder_test.hpp"

#include<algorithm>
#include<functional>
#include<iostream>

void XieBinder::mathOperationTest()
{
    auto plus10 = std::bind(std::plus<int>(),std::placeholders::_1,10);
    std::cout<<"+10    "<<plus10(7)<<std::endl;

    auto plus10time2 =std::bind(std::multiplies<int>(),std::bind(std::plus<int>(),std::placeholders::_1,10),2);
    std::cout<<"+10*2:    "<<plus10time2(7)<<std::endl;
}
