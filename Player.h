//
//  Player.h
//  ArenaLogic
//
//  Created by Andrew Francis on 4/19/15.
//  Copyright (c) 2015 Andrew Francis. All rights reserved.
//

#include <iostream>
#include <string>
#include "Item.h"
#include "Creature.h"

using namespace std;


#ifndef ArenaLogic_Player_h
#define ArenaLogic_Player_h


class Player{
    
public: Player();
    void setName();
    void setCreature();
    
private:
    string name;
    Creature ourCreature;
    
};

#endif
