#include<cstdlib>
#include<deque>
#include "../tools/print.hpp"

using namespace std;

bool absLess(int elemt1,int elemt2)
{
    return abs(elemt1) < abs(elemt2);
}
void minmax1_test()
{
    deque<int> coll;
    insert_element(coll,2,6);
    insert_element(coll,-3,6);
    print_element(coll);

    cout<<"minimum:"
        <<*min_element(coll.cbegin(),coll.cend())
        <<endl;
    cout<<"maximum:"
        <<*max_element(coll.cbegin(),coll.cend())
        <<endl;

    auto nm = minmax_element(coll.cbegin(),coll.cend());
    cout<<"min:"<<*(nm.first)<<endl;
    cout<<"max:"<<*(nm.second)<<endl;
    cout<<"distance: "<<distance(nm.first,nm.second)<<endl;

    cout<<"minmum absolute:"
        <<*min_element(coll.begin(),coll.end(),absLess)
        <<endl;
    cout<<"maxmum absolute:"
        <<*max_element(coll.begin(),coll.end(),absLess)
        <<endl;
}
