#include <iostream>
#include "map_test.hpp"

using namespace std;
xieMap::xieMap()
{
    cout<<"xieMap init"<<endl;
    insertEntryTest();
    removeEntryTest();
}
xieMap::~xieMap()
{
    cout<<"xieMap uninit"<<endl;
    mdata.clear();
}
void xieMap::Traversal()
{
    for(auto &elemt : mdata)
    {
        cout<<"first elemt "<<elemt.first<<" ";
        cout<<"second elemt "<<elemt.second<<endl;
    }
    cout<<endl;
}
void xieMap::insertEntryTest()
{
    typedef std::map<std::string,float> Coll;

    mdata.insert({"cott",22.3});
    mdata.insert(Coll::value_type("bcad",32.3));
    mdata.insert(std::pair<std::string,float>("pair",12.3));
    mdata.insert(std::make_pair("make_pair",100));

    mdata["bcad"] = 33.3;
    mdata["abcdd"] = 54.3;

    mdata["xiejinbao"] = 99.0;
    mdata["xiejinbao"] = 100;
    Traversal();
}
void xieMap::removeEntryTest()
{
   mdata.erase("bcad"); 

   auto pos = mdata.find("abcdd");
   if(pos != mdata.end())
       mdata.erase(pos);
   
   float val = 100;
   for(auto pos = mdata.begin();pos != mdata.end();)
   {
       if(pos->second == val)
           pos = mdata.erase(pos);
       else
           ++pos;
   }
   Traversal();
}
