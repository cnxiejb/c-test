#ifndef _H_PRINT_TOOLS_
#define _H_PRINT_TOOLS_

#include<iostream>

template<typename T>
class PrintfTool
{
    public:
        void operator()(const T& coll) const{
            for(auto &elemt : coll)
                std::cout<<elemt<<",";
            std::cout<<std::endl;
        }
};
#endif
