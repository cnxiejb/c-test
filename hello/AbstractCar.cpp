#include"AbstractCar.hpp"
#include<iostream>
AbstractCar::AbstractCar()
{
    std::cout<<"AbstractCar struction"<<std::endl;
}
AbstractCar::AbstractCar(std::string tname,std::string lo,std::string town,int tage)
    :name(tname),location(lo),own(town),age(tage)
{
    ;
}
AbstractCar::~AbstractCar()
{
    std::cout<<"AbstractCar destruction"<<std::endl;
}
int AbstractCar::whoIam()
{
    std::cout<<"i am a car"<<std::endl;
    std::cout<<"my name is"<<this->name<<std::endl;
    std::cout<<"location is"<<this->location<<std::endl;
    std::cout<<"i belongs to"<<this->own<<std::endl;
    std::cout<<"i am "<<this->age<<"years old"<<std::endl;
}
int AbstractCar::whatIdo()
{
    std::cout<<"i am run"<<std::endl;
}
int AbstractCar::printMe()
{
    this->whoIam();
    this->whatIdo();
}
