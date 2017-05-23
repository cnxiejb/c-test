#ifndef TEST_ARRAY1_H_
#define TEST_ARRAY1_H_

#include<array>
#include<algorithm>
#include<functional>
#include<numeric>
#include<iostream>

class XieArray
{
    public:
        XieArray();
        ~XieArray();

        void Traversal();
        int64_t x_accumulate();
        void Reserve();
    private:
        std::array<int,20> data;
};

#endif
