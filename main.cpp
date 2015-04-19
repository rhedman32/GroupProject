//
//  main.cpp
//  ArenaLogic
//
//  Created by Andrew Francis on 4/15/15.
//  Copyright (c) 2015 Andrew Francis. All rights reserved.
//

#include <iostream>
#include "Arena.h"
#include "Player.h"
using namespace std;

// Main HELPER METHOD Definitions
void textSeparator() {
    cout << "-------------------------\n";
}

// FUNCTION TO DISPLAYS THE GAME RULES
void displayRules() {
    cout << "Rules go here\n";
    textSeparator();
}
// FUNCTION THAT DISPLAYS THE MENU OPTIONS
void displayMenu() {
    cout << "1. Enter the battle Arena\n";
    cout << "2. View Items\n";
    cout << "3. View Monsters\n";
    cout << "4. Quit\n";
    
    textSeparator();
    
}

void createArena() {
    
    Player player = Player();
    Arena ourArena = Arena(player);
    
    //Debugging code
    
}

void viewItems() {
    
}

void viewMonsters() {
    
}


void parseSelection(int selection) {
    // FILL IN LOGIC
    cout << selection;
    
    if (selection == 1)
        createArena(); // Creates the arena if the selection is 1.
    else if (selection == 2)
        viewItems();
    else if (selection == 3)
        viewMonsters();
    else if (selection == 4)
        cout << "Thank you for playing!";
    else throw invalid_argument("Invalid selection");
    
}


// THE MAIN of the Program

int main() {
    
    displayRules();
    displayMenu();
    
    int selection;
    cin >> selection;
    
    try {
        parseSelection(selection);
    }
    catch( ... ) { cout << "Invalid selection try again.";
        cin >> selection;
        parseSelection(selection);
        throw;
    }
    
    return 0;
    
}


