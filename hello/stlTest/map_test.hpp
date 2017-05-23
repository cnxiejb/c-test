#ifndef _H_MAPTEST_
#define _H_MAPTEST_
#include <map>

class xieMap
{
    public:
         xieMap();
         void insertEntryTest();
    private:
         std::map<std::string,float> coll;
};

#endif
