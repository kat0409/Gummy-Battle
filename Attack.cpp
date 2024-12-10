#include "Attack.h"
#include <iostream>
#include <string>

using namespace std;


Attack::Attack(){
    bite = "";
    punch = "";
    biteInc = 0;
    punchInc = 0;
}

Attack::Attack(string _bite, string _punch, int _biteInc, int _punchInc, int _damage) : ActionTypes(_damage){
    bite = _bite;
    punch = _punch;
    biteInc = _biteInc;
    punchInc = _punchInc;
}
        
void Attack::setAttack(string _bite, string _punch){
    bite = _bite;
    punch = _punch;
}
        
string Attack::getBite()const{
    return bite;
}

string Attack::getPunch()const{
    return punch;
}
        
string Attack::getType()const{
    return "Attack";
}

bool Attack::train(int _biteInc, int _punchInc, int _damage){
    if(_damage >= 10){
        biteInc = _biteInc + 10;
        punchInc = punchInc + 10;
        return true;
    }
    return false;
}

int Attack::getBiteInc()const{
    return biteInc;
}

int Attack::getPunchInc()const{
    return punchInc;
}
        
void Attack::print()const{
    ActionTypes::print();
    cout << "Damage" << getDamage() << endl;
    cout << "Attack chosen: " << endl;
    cout << "Bite: " << getBite() << ", Punch: " << getPunch()  << endl;
    cout << "New bite magnitude: " << getBiteInc() << endl;
    cout << "New punch magnitude: " << getPunchInc() << endl;
}