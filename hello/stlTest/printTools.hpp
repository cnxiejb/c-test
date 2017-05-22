#ifndef _H_PRINT_TOOLS_
#define _H_PRINT_TOOLS_

#include<iostream>

class PrintfInt
{
    public:
        void operator()(int elemt) const{
            std::cout<<(elemt-1)/2<<",";
        }
};
#endif
