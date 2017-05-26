#include<memory>//for shared_ptr
#include "stlTest/array_test.hpp"
#include "stlTest/vector_test.hpp"
#include "stlTest/list_test.hpp"
#include "stlTest/set_test.hpp"
#include "stlTest/map_test.hpp"
#include "stlTest/unorderset_test.hpp"
#include "stlTest/binder_test.hpp"

int main()
{
/*    std::shared_ptr<XieList> lp= std::make_shared<XieList>();*/
    /*lp->Traversal();*/

/*    std::shared_ptr<XieVector> vp=std::make_shared<XieVector>();*/
    //vp->SPrintf();

    //std::shared_ptr<XieBinder> bp=std::make_shared<XieBinder>();
    /*bp->mathOperationTest();*/

/*    std::shared_ptr<XieArray> ap = std::make_shared<XieArray>();*/
    //ap->Traversal();
    //ap->Reserve();

    //std::shared_ptr<XieSet> sp= std::make_shared<XieSet>();

    //std::shared_ptr<xieMap> mp = std::make_shared<xieMap>();
    
    /*std::shared_ptr<unXieSet> usp = std::make_shared<unXieSet>();*/
    //void count1_test();
    //count1_test();

    void minmax1_test();
    minmax1_test();
    return 0;
}

