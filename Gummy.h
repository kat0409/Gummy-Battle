#ifndef GUMMY_H
#define GUMMY_H

#include <iostream>
#include <string>

using namespace std;

class Gummy{
    protected:
        string name;
        int id;
        int level;
        int health;
        int speedStat;
        int attackStat;
        int defenseStat;
    public:
        Gummy();
        Gummy(string _name, int _id, int _level, int _health, int _speedStat, int _attackStat, int _defenseStat);
        string getName() const;
        int getSpeedStat()const;
        int getDefenseStat()const;
        int getAttackStat()const;
        int getId() const;
        int getLevel() const;
        int getHealth() const;
        void setName(string _name);
        void setSpeedStat(int _speed);
        void setDefenseStat(int _defenseStat);
        void setAttackStat(int _attackStat);
        void setId(int _id);
        void setLevel(int _level);
        void setHealth(int _health);
        virtual void print()const;
        ~Gummy(){}

};

#endif