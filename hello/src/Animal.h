#ifndef _H_ANIMAL_
#define _H_ANIMAL_

#include<iostream>

class Animal
{
    public:
        Animal();
        ~Animal();
        
        void eat();
        virtual void cry();
};
#endif
