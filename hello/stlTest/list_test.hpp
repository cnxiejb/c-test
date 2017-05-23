#ifndef LIST_TEST_H_
#define LIST_TEST_H_
#include<list>

class XieList
{
    public:
        XieList();
        ~XieList();

        void Traversal();
    private:
        std::list<int> ilist1;
        std::list<int> ilist2;
};
#endif
