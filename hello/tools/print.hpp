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

template<typename T>
inline void insert_element(T& coll,int first,int last)
{
    for(int i=first;i <= last;++i)
    {
        coll.insert(coll.end(),i);
    }
}

template<typename T>
inline void print_mapped_element(const T& coll,const std::string optstr="")
{
    std::cout<<optstr<<std::endl;
    for(auto &elemt : coll)
    {
        std::cout<<"first  element :"<<elemt.first<<std::endl;
        std::cout<<"second element :"<<elemt.second<<std::endl;
    }
}

#endif
