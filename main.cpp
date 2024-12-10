#include <iostream>
#include <string>
#include "Gummy.h"
#include "GummyBear.h"
#include "GummyWorm.h"
#include "Attack.h"
#include "Defense.h"
#include "Action.h"
#include "ActionTypes.h"
#include <random>

using namespace std;

int getRN(int min, int max){//Random number generator 
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(min,max);
    return dis(gen);
}

int main(){
    string attackName1;
    string defenseName1;
    string attackName2;
    string defenseName2;

    string gbName;
    string gwName;

    cout << "Enter the name of your Gummy Bear: " << endl;
    getline(cin, gbName);

    cout << "Enter the name of your Gummy Worm: " << endl;
    getline(cin,gwName);

    cout << "Choose the name of the first attack from the list: Teleport Punch, Punch Blast" << endl;
    getline(cin, attackName1);
    cout << endl;

    cout << "Choose the name of the first defense: Gummy Shield, Teleport" << endl;
    getline(cin,defenseName1);
    cout << endl;

    cout << "Choose the name of the second attack from this list: Uppercut, High Punch" << endl;
    getline(cin, attackName2);
    cout << endl;

    cout << "Choose the name of the second defense from this list: Speed Run, Sugar Shield" << endl;
    getline(cin, defenseName2);
    cout << endl;

    Attack attack1(attackName1, attackName2, getRN(1,100),getRN(1,100), getRN(1, 100));//uses a random number generator to determine the increase in damage of the attacks
    Defense d1(defenseName1, defenseName2, getRN(1,100));//uses  random number generator to determine the amount of damage the defense tactics deflect
    GummyWorm gummyworm1(gwName, getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100));//uses a random number generator to determine the health, attack stat, defense stat, speed stat, tooth size, and body length of the GummyWorm object
    GummyBear gummybear1(gbName, getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100), getRN(1,100));//uses a random number generator to determine the health, attack stat, defense stat, speed stat, and fist size of the GummyBear object

    if(gummybear1.getAttackStat() > gummyworm1.getAttackStat()){//Checks to see which attack stat is greater. The objects with the greatest attack stat wins
        cout << "GummyBear wins" << endl;
    }
    else if(gummybear1.getAttackStat() < gummyworm1.getAttackStat()){
        cout << "GummyWorm wins" << endl;
    }

    attack1.print();
    d1.print();
    gummyworm1.print();
    gummybear1.print();
    gummybear1.saveData();
    gummybear1.loadData();
}