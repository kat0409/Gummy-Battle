#include "Gummy.h"
#include <string>
#include <iostream>

using namespace std;

Gummy::Gummy(){
    name = "";
    id = 0;
    level = 1;
    health = 100;
    speedStat = 0;
    attackStat = 0;
    defenseStat = 0;
}

Gummy::Gummy(string _name, int _id, int _level, int _health, int _speedStat, int _attackStat, int _defenseStat){
    name = _name;
    id = _id;
    level = _level;
    health = _health;
    speedStat = _speedStat;
    attackStat = _attackStat;
    defenseStat = _defenseStat;
}

void Gummy::setName(string _name){
    string name = _name;
}
void Gummy::setId(int _id){
    int id = _id;
}
void Gummy::setLevel(int _level){
    int level = _level;
}
void Gummy::setHealth(int _health){
    int health = _health;
}

void Gummy::setSpeedStat(int _speedStat){
    speedStat = _speedStat;
}

void Gummy::setAttackStat(int _attackStat){
    attackStat = _attackStat;
}

void Gummy::setDefenseStat(int _defenseStat){
    defenseStat = _defenseStat;
}

string Gummy::getName() const{
    return name;
}
        
int Gummy::getId() const{
    return id;
}
        
int Gummy::getLevel() const{
    return level;
}
int Gummy::getHealth() const{
    return health;
}
        
int Gummy::getSpeedStat() const{
    return speedStat;
}

int Gummy::getAttackStat()const{
    return attackStat;
}

int Gummy::getDefenseStat()const{
    return defenseStat;
}

void Gummy::print()const{
    cout << "Gummy Stats: " << endl;
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getId() << endl;
    cout << "Level: " << getLevel() << endl;
    cout << "Health: " << getHealth() << endl;
    cout << "Speed stat: " << getSpeedStat() << endl;
    cout << "Attack stat: " << getAttackStat() << endl;
    cout << "defense stats: " << getDefenseStat() << endl;
}

