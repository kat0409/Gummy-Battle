#include "Action.h"
#include <iostream>
#include <string>

using namespace std;

Action::Action(int _size){
    size = _size;
    nActions = 0;
    actions = new ActionTypes *[size];
    for(int i = 0; i < size; i++){
        actions[i] = nullptr;
    }
}
        
Action::~Action(){
    if(actions != nullptr){
        for(int i = 0; i < size; i++){
            if(actions != nullptr){
                delete actions[i];
            }
        }
        delete [] actions;
    }
}
        
Action::Action(const Action & obj){
    size = obj.size;
    nActions = obj.nActions;
    actions = new ActionTypes *[size];
    for(int i = 0; i < size; i++){
        if(obj.actions[i] != nullptr){
            if(obj.actions[i]->getType() == "Attack"){
                actions[i] = new Attack((Attack &)(*obj.actions[i]));
            }
            else if(obj.actions[i]->getType() == "Defense"){
                actions[i] = new Defense((Defense &)(*obj.actions[i]));
            }
            else{
                actions[i] = nullptr;
            }
        }
    }
}
        
Action & Action::operator = (const Action & rhs){
    if(this != &rhs){
        if(actions != nullptr){
            for(int i = 0; i < rhs.size; i++){
                if(actions[i] != nullptr){
                    delete actions[i];
                    actions[i] = nullptr;
                }
            }
            delete [] actions;
            actions = nullptr;
        }
        size = rhs.size;
        nActions = rhs.nActions;
        actions = new ActionTypes *[size];
        if(actions != nullptr){
            for(int i = 0; i < size; i++){
                if(rhs.actions[i] != nullptr){
                    if(rhs.actions[i]->getType() == "Attack"){
                        actions[i] = new Attack((Attack &)(*rhs.actions[i]));
                    }
                    else if(rhs.actions[i]->getType() == "Defense"){
                        actions[i] = new Defense((Defense &)(*rhs.actions[i]));
                    }
                    else{
                        actions[i] = nullptr;
                    }
                }
            }
        }
    }
    return *this;
}

bool Action::addAction(const ActionTypes & a){//adds actions to the array based on the type of action, in this case attack or defense
    if(nActions == size){
        return false;
    }
    if(a.getType() == "Attack"){
        actions[nActions] = new Attack ((Attack &)a);
    }
    else if(a.getType() == "Defense"){
        actions[nActions] = new Defense((Defense &)a);
    }
    nActions++;
    return true;
}
        
void Action::print()const{
    for(int i = 0; i < nActions; i++){
        if(actions[i] != nullptr){
            actions[i]->print();
        }
    }
}
