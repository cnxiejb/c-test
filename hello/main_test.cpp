#include "stlTest/array_test.hpp"
#include "stlTest/vector_test.hpp"
#include "stlTest/list_test.hpp"
#include "stlTest/set_test.hpp"
#include "stlTest/map_test.hpp"

int main()
{
/*    XieList *lp= new XieList();*/
    //lp->Traversal();
    //delete lp;
    /*lp=NULL;*/

/*    XieVector *ms= new XieVector();*/
    //ms->SPrintf();
    //delete ms;
    /*ms=NULL;*/

/*    XieArray *ap = new XieArray();*/
    //ap->Traversal();
    //ap->Reserve();
    //delete ap;
    /*ap=NULL;*/

    /*XieSet *sp= new XieSet();*/
    ////sp->Traversal();
    //delete sp;
    /*sp=NULL;*/

    xieMap *mp = new xieMap();
    delete mp;
    mp=NULL;
    
    return 0;
}

