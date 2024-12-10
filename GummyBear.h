#ifndef GUMMYBEAR_H
#define GUMMYBEAR_H

#include "Gummy.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class GummyBear : public Gummy
{
    protected:
        int fistSize;
    public:
        GummyBear();
        GummyBear(string _name, int _id, int level, int _health, int _attackStat, int _defenseStat, int _speedStat, int _fistSize);
        void setFistSize(int _fistSize);
        int getFistSize()const;
        virtual void print() const;
        void saveData();
        void loadData();
        ~GummyBear(){}
};


#endif