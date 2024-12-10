#ifndef ACTIONTYPES_H
#define ACTIONTYPES_H
#include <iostream>
#include <string>

using namespace std;

class ActionTypes{//Abstract class
    protected:
        int damage;
    public:
        ActionTypes();
        ActionTypes(int _damage);
        void setDamage(int _damage);
        int getDamage()const;
        ~ActionTypes(){}
        virtual string getType()const = 0;//pure virtual function
        virtual void print()const;

};

#endif 