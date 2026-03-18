#include <iostream>
#include "follower.h"
#include "bee.h"

using namespace std;

// Constructor
Bee::Bee() : Follower() { 
    type = "Bee";
}

//1 arg constructor
Bee::Bee(string name) : Follower(name) { 
    type = "Bee";
}

//copy constructor
Bee::Bee(const Bee& other) : Follower(other) { 
    type = "Bee";
}

//destructor
Bee::~Bee() {
    cout << "Bee has stung its last sting..." << endl;
}

// Bee gets its own performAction function
void Bee::performAction() {
    resourcePool -= 2;
    faith += 6;

    cout << name << " makes honey. -2 resources, +6 faith.\n";
}