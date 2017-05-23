#include "stlTest/array_test.hpp"
#include "stlTest/vector_test.hpp"

int main()
{
    XieVector *ms= new XieVector();
    ms->SPrintf();
    delete ms;
    ms=NULL;

/*    XieArray *ap = new XieArray();*/
    //ap->Traversal();
    //ap->Reserve();
    //delete ap;
    /*ap=NULL;*/

    return 0;
}

