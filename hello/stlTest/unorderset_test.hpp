#ifndef UNORDER_SET_TEST_H_
#define UNORDER_SET_TEST_H_
#include<unordered_set>
class unXieSet
{
    public:
        unXieSet();
        ~unXieSet();
    private:
        void Traversal();
        void printBucketInfo();
    private:
        std::unordered_set<int> usdata;
};
#endif
