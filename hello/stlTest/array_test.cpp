#include<algorithm>
#include "array_test.hpp"

using namespace std;

XieArray::XieArray()
{
    for(int i=0;i < data.size();i++ )
    {
        data.at(i) = i*3+1;
    }
    cout<<"XieArray init"<<endl;
}
XieArray::~XieArray()
{
    cout<<"XieArray uninit"<<endl;
}
void XieArray::Traversal()
{
    for(auto &elemt : data)
        cout<<elemt<<",";
    cout<<endl;
    cout<<"the sum = "<<this->x_accumulate()<<endl;
}
int64_t XieArray::x_accumulate()
{
    return std::accumulate(data.begin(),data.end(),1);
}
void XieArray::Reserve()
{
    std::transform(data.begin(),data.end(),data.begin(),negate<int>());
    Traversal();
}
