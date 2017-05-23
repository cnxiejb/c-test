#ifndef VECTOR_TEST_H_
#define VECTOR_TEST_H_
#include<vector>
#include<string>
class XieVector
{
    public:
        XieVector();
        ~XieVector();

        void SPrintf();

    private:
        void printfClassInfo();
        void removeEqualVal(int);
    private:
        std::vector<int> vdataInt;
};
#endif
