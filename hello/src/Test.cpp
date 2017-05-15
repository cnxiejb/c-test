#include<iostream>
#include"Test.hpp"
using std::endl;
using std::cout;
int Test::static_number = 10;
void BaseTest::baseTest()
{
   cout<<"baseTest function test"<<endl; 
}
Test::Test()
{
    std::cout<< "a Test Born"<<std::endl;
}
Test::~Test()
{
    std::cout<<"a Test Dead"<<std::endl;
}
int Test::ExcTest()
{
    baseTest();
    return(ImpTest());
}
int Test::ImpTest()
{
    std::cout<<"General function test"<<std::endl;
    return 0;
}
void Test::virTest()
{
    std::cout<<"virtual function test"<<endl;
}
void Test::staticTest()
{
    std::cout<<"static function test"<<endl;
}
int Test::getStaticNumber()
{
    return static_number;
}
