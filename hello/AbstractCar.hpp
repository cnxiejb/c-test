#ifndef _ABCAR_
#define _ABCAR_
#include<iostream>
class AbstractCar
{
    public:
        AbstractCar();
        AbstractCar(std::string name,std::string tlocaion,std::string owner,int age=0);
        ~AbstractCar();
        int printMe();

    private:
        int whoIam();
        int whatIdo();
    private:
        std::string name;
        std::string location;
        std::string own;
        int age;
};
#endif
