//
//  Arena.cpp
//  ArenaLogic
//
//  Created by Andrew Francis on 4/19/15.
//  Copyright (c) 2015 Andrew Francis. All rights reserved.
//

#include "Arena.h"

Arena::Arena(Player player){
    setPlayer(player);
}

void Arena::setPlayer(Player player) {
    this->player = player;
}

Player Arena::getPlayer() {
    return this->player;
}

