#ifndef ATTACK_H
#define ATTACK_H
#include "ActionTypes.h"

#include <iostream>
#include <string>

using namespace std;

class Attack : public ActionTypes{
    private:
        string bite;
        string punch;
        int biteInc;
        int punchInc;
    public:
        Attack();
        Attack(string _bite, string _punch, int _biteInc, int _punchInc, int _damage);
        void setAttack(string _bite, string _punch);
        string getPunch()const;
        string getBite()const;
        string getType()const;
        bool train(int _biteInc, int _punchInc, int _damage);
        int getBiteInc()const;
        int getPunchInc()const;
        virtual void print()const;
        ~Attack(){}
};


#endif