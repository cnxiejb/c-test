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
/*    XieList *lp= new XieList();*/
    //lp->Traversal();
    //delete lp;
    /*lp=NULL;*/

/*    std::shared_ptr<XieVector> vp=std::make_shared<XieVector>();*/
    /*vp->SPrintf();*/

    std::shared_ptr<XieBinder> bp=std::make_shared<XieBinder>();
    bp->mathOperationTest();
/*    XieArray *ap = new XieArray();*/
    //ap->Traversal();
    //ap->Reserve();
    //delete ap;
    /*ap=NULL;*/

    /*XieSet *sp= new XieSet();*/
    ////sp->Traversal();
    //delete sp;
    /*sp=NULL;*/

    /*xieMap *mp = new xieMap();*/
    //delete mp;
    /*mp=NULL;*/
    
/*    unXieSet *usp=new unXieSet();*/
    //delete usp;
    /*usp=NULL;*/
    return 0;
}

