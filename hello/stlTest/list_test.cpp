#include "list_test.hpp"
#include<iostream>
#include<algorithm>

using namespace std;
XieList::XieList()
{
    cout<<"XieList init"<<endl;

    for(int i=0;i < 10;i++){
       ilist1.push_back(i);
       ilist2.push_front(i+10);
    }
}
XieList::~XieList()
{
    cout<<"XieList uninit"<<endl;
    ilist1.clear();
    ilist2.clear();
}
void XieList::Traversal()
{
    cout<<"ilist1:"<<endl;
    copy(ilist1.begin(),ilist1.end(),ostream_iterator<int>(cout,","));
    cout<<endl;
    
    cout<<"ilist2:"<<endl;
    for(auto &elemt : ilist2)
        cout<<elemt<<",";
    cout<<endl;

}
