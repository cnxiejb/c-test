#include <iostream>
#include "mapTest.hpp"

xieMap::xieMap()
{
    std::cout<<"i am a xiemap"<<std::endl;
}
void xieMap::insertEntryTest()
{
    typedef std::map<std::string,float> Coll;

    coll.insert({"cott",22.3});
    coll.insert(Coll::value_type("coott",32.3));
    coll.insert(std::pair<std::string,float>("pair",12.3));
    coll.insert(std::make_pair("make_pair",87.6));
}
