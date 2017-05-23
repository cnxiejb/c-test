#ifndef SET_TEST_H_
#define SET_TEST_H_
#include<set>
#include<algorithm>

class XieSet
{
    public:
        XieSet();
        ~XieSet();

        void Traversal();
    private:
        void xinsert(int val);
        void createAnotherSet();
    private:
        std::set<int,std::greater<int> > sdata;
};
#endif
