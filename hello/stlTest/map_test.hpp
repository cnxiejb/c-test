#ifndef _H_MAPTEST_
#define _H_MAPTEST_
#include <map>

class xieMap
{
    public:
         xieMap();
         ~xieMap();
    private:
         void insertEntryTest();
         void removeEntryTest();
         void Traversal();
    private:
         std::map<std::string,float> mdata;
};

#endif
