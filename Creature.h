
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

#ifndef ArenaLogic_Creature_h
#define ArenaLogic_Creature_h



class Creature
{
public:
    
    int Attack();
    void UseItem(Item item);
    
private:
    int HP = 100;
    string name;
    int power;
};


#endif
