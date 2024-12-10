#include "GummyBear.h"
#include "Gummy.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

GummyBear::GummyBear(){
    fistSize = 10;
}

GummyBear::GummyBear(string _name, int _id, int _level, int _health, int _attackStat, int _defense, int _speedStat, int _fistSize) : Gummy(_name, _id, _level, _health, _attackStat, _defense, _speedStat){
    fistSize = _fistSize;
}
        
void GummyBear::setFistSize(int _fistSize){
    int fistSize = _fistSize;
}
        
int GummyBear::getFistSize()const{
    return fistSize;
}

void GummyBear::print()const{
    Gummy::print();
    cout << "Gummy Bear Stats: " << endl;
    cout << "Fist size: " << getFistSize() << endl;
}

void GummyBear::saveData(){//saves the data of the GummyBear object to a .txt file
    ofstream output("GummyBearData.txt", ios::out | ios::binary);
    if(!output){
        cerr << "Data cannot be saved: " << endl;
    }
    output.write(reinterpret_cast<char*>(this), sizeof(*this));
    cerr << "Data has been saved" << endl;
}

void GummyBear::loadData(){//loads the data of the GummyBear object from a .txt file
    ifstream output("GummyBearData.txt", ios::in | ios::binary);
    if(!output){
        cerr << "Data cannot be loaded: " << endl;
    }
    output.read(reinterpret_cast<char*>(this), sizeof(*this));
    cerr << "Data has been loaded" << endl;
}