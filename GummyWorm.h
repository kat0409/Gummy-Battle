#ifndef GUMMYWORM_H
#define GUMMYWORM_H

#include "Gummy.h"
#include <string>
#include <iostream>

using namespace std;

class GummyWorm : public Gummy
{
    protected:
        int toothSize;
        int bodyLength;
    public:
        GummyWorm();
        GummyWorm(string _name, int _id, int level, int _health, int _attackStat, int _defenseStat, int _speedStat, int _toothSize, int _bodyLength);
        void setToothSize(int _toothSize);
        void setBodyLength(int _bodyLength);
        int getToothSize()const;
        int getBodyLength()const;
        virtual void print()const;
        ~GummyWorm(){}
};




#endif