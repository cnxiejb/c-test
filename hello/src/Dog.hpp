#ifndef _H_DOG_
#define _H_DOG_

#include "Animal.h"

class Dog:public Animal{
    public:
        Dog();
        ~Dog();

        //void eat();
        void eat(int);
        virtual void cry() override;
};
#endif
