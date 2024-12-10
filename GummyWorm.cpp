#include "GummyWorm.h"
#include <iostream>
#include <string>

using namespace std;

GummyWorm::GummyWorm(){
    toothSize = 0;
    bodyLength = 0;
}
        
GummyWorm::GummyWorm(string _name, int _id, int _level, int _health, int _attackStat, int _defenseStat, int _speedStat, int _toothSize, int _bodyLength) : Gummy(_name, _id, _level, _health, _attackStat, _defenseStat, _speedStat){
    toothSize = _toothSize;
    bodyLength = _bodyLength;
}
        
void GummyWorm::setToothSize(int _toothSize){
    toothSize = _toothSize;
}
        
void GummyWorm::setBodyLength(int _bodyLength){
    bodyLength = _bodyLength;
}
        
int GummyWorm::getToothSize()const{
    return toothSize;
}
        
int GummyWorm::getBodyLength()const{
    return bodyLength;
}

void GummyWorm::print()const{
    Gummy::print();
    cout << "Gummy Worm Stats: " << endl;
    cout << "Body length: " << getBodyLength() << endl;
    cout << "Tooth size: " << getToothSize() << endl;
}