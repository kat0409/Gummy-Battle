#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <string>
#include "Defense.h"
#include "Attack.h"
#include "ActionTypes.h"

using namespace std;

class Action{
    private:
        ActionTypes **actions;//dynamic array of pointers to ActionTypes
        int size;
        int nActions;
    public:
        Action(int _size);
        ~Action();
        Action(const Action & obj);
        Action & operator = (const Action & rhs);
        bool addAction(const ActionTypes & a);
        void print()const;
};






#endif