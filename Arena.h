//
//  Arena.h
//  ArenaLogic
//
//  Created by Andrew Francis on 4/15/15.
//  Copyright (c) 2015 Andrew Francis. All rights reserved.
//
// The header file for Arena objects
#include <iostream>
#include <string>
#include "Player.h"
#include "Creature.h"

using namespace std;

#ifndef ArenaLogic_Arena_h
#define ArenaLogic_Arena_h

class Arena {
    
public:
    
    Arena(Player player);
    
    void printArenaDetails();
    void setPlayer(Player player);
    void setEnemy(string enemy);
    Player getPlayer();
    Creature getEnemy();
    
    
private:
    
    Player player;
    Creature enemy;
    
    
};




#endif
