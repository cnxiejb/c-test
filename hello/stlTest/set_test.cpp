#include<iostream>
#include "set_test.hpp"
using namespace std;
XieSet::XieSet()
{
    cout<<"XieSet init"<<endl;

    sdata.insert({4,3,5,1,6,2});
    sdata.insert(5);
    Traversal();
    xinsert(4);
    createAnotherSet();
}
XieSet::~XieSet()
{
    cout<<"XieSet uninit"<<endl;
    sdata.clear();
}
void XieSet::xinsert(int val)
{
    auto status = sdata.insert(val);
    if(status.second){
        cout<<"insert val="<<val<<" succeed at "
            <<distance(sdata.begin(),status.first)+1<<endl;
    }
    else
    {
        cout<<val<<" already exit"<<endl;
    }
}
void XieSet::createAnotherSet()
{
    set<int> coll(sdata.cbegin(),sdata.cend());

    copy(coll.begin(),coll.end(),ostream_iterator<int>(cout,","));
    cout<<endl;

    coll.erase(coll.begin(),coll.find(3));

    cout<<coll.erase(5)<<" elements removed"<<endl;
    copy(coll.begin(),coll.end(),ostream_iterator<int>(cout,","));
    cout<<endl;
}
void XieSet::Traversal()
{
    cout<<"set size="<<sdata.size()<<endl;
    for(auto &elemt : sdata)
        cout<<elemt<<",";
    cout<<endl;
}
