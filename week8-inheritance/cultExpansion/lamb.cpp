#include <iostream>
#include "lamb.h"

using namespace std;

// Constructor
Lamb::Lamb() : Follower() { 
    type = "Lamb";
}

//1 arg constructor
Lamb::Lamb(string name) : Follower(name) { 
    type = "Lamb";
}

//copy constructor
Lamb::Lamb(const Lamb& other) : Follower(other) {
    type = "Lamb";
 }

//destructor
Lamb::~Lamb() {
    cout << "Lamb has ascended to a higher plane." << endl;
}

// Lamb gets its own performAction function
void Lamb::performAction() {
    resourcePool += 10;
    faith += 5;

    cout << name << " goes on a crusade to gather resources. +10 resources +5 faith.\n";
}