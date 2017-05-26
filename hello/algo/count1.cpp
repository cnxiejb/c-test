#include "../tools/print.hpp"
#include<vector>
using namespace std;

void count1_test()
{
   vector<int> coll;

   insert_element(coll,1,9);
   print_element(coll);

   int num = count(coll.begin(),coll.end(),4);
   cout<<"num of element equal to 4 :"<<num<<endl;

   num = count_if(coll.begin(),coll.end(),
           [](int elemt){
                return elemt%2 == 0;
           });
   cout<<"num of element with even value:"<<num<<endl;

   num = count_if(coll.begin(),coll.end(),
           [](int elemt){
                return elemt > 4;
           });
   cout << "num of element greater than 4:"<<num<<endl;
}
