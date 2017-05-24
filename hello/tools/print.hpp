#ifndef PRINT_H_
#define PRINT_H_

#include<iostream>
#include<string>

template<typename T>
inline void print_element(const T& coll,const std::string optstr="")
{
    std::cout<<optstr<<std::endl;
    for(auto &elemt : coll)
        std::cout<<elemt<<",";
    std::cout<<std::endl;
}
#endif
