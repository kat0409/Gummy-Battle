#include "ActionTypes.h"
#include <iostream>
#include <string>

using namespace std;

ActionTypes::ActionTypes(){
    damage = 0;
}
        
ActionTypes::ActionTypes(int _damage){
    damage = _damage;
}
        
void ActionTypes::setDamage(int _damage){
    damage = _damage;
}
        
int ActionTypes::getDamage()const{
    return damage;
}
        
void ActionTypes::print()const{
    cout << "Damage: " << damage << endl;
}