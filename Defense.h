#ifndef DEFENSE_H
#define DEFENSE_H
#include "ActionTypes.h"

#include <iostream>
#include <string>

using namespace std;

class Defense : public ActionTypes{
    private:
        string shield;
        string run;
    public:
        Defense();
        Defense(string _shield, string _run, int _damage);
        void setDefense(string _shield, string _run);
        string getShield()const;
        string getRun()const;
        string getType()const;
        virtual void print()const;
        ~Defense(){}
};


#endif