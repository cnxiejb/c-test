#include<iostream>
#include<algorithm>
#include<numeric>

#include "unorderset_test.hpp"
#include "../tools/buckets.hpp"
#include "../tools/print.hpp"

using namespace std;

unXieSet::unXieSet()
{
    cout<<"unXieSet init"<<endl;
    usdata.insert({1,2,3,5,7,11,13,17,19,17});
    //Traversal();

    usdata.insert({-7,17,33,-11,17,19,1,13});
    //Traversal();

    usdata.erase(33);
    usdata.insert(accumulate(usdata.begin(),usdata.end(),0));
    //Traversal();

    if(usdata.find(19) != usdata.end())
        cout<<"19 is available"<<endl;

    for(auto pos = usdata.begin();pos != usdata.end();++pos)
    {
        if(*pos < 0)
            pos = usdata.erase(pos);
        else
            ++pos;
    }
    Traversal();
    printBucketInfo();
}
unXieSet::~unXieSet()
{
    cout<<"unXieSet uninit"<<endl;
}
void unXieSet::Traversal()
{
    print_element(usdata);
    /*for(auto &elemt : usdata)*/
    //{
        //cout<<elemt<<",";
    //}
    /*cout<<endl;*/
}
void unXieSet::printBucketInfo()
{
    printfHashTableState(usdata);
}
