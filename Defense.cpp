#include "Defense.h"
#include <iostream>
#include <string>

using namespace std;

        
Defense::Defense(){
    shield = "";
    run = "";
}
        
Defense::Defense(string _shield, string _run, int _damage) : ActionTypes(_damage){
    shield = _shield;
    run = _run;
}
        
void Defense::setDefense(string _shield, string _run){
    shield = _shield;
    run = _run;
}
        
string Defense::getShield()const{
    return shield;
}

string Defense::getRun()const{
    return run;
}
            
string Defense::getType()const{
    return "Defense";
}
        
void Defense::print()const{
    ActionTypes::print();
    cout << "Damage" << getDamage() << endl;
    cout << "Defense tactics chosen: " << endl;
    cout << "Shield: " << getShield() << ", Run: " << getRun() << endl;
}
