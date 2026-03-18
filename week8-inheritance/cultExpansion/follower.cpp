#include <iostream>
#include "follower.h"

using namespace std;

// Initialize static variables
int Follower::resourcePool = 0;
int Follower::faith = 0;

// Default Constructor
Follower::Follower() {
    name = "New guy";
    devotion = 0;
    type = "Generic";
}

//1 arg constructor
Follower::Follower(string name) {
    this->name = name;
    devotion = 0;
    type = "Generic";
}

//copy constructor
Follower::Follower(const Follower& other) {
    name = other.name;
    devotion = other.devotion;
    type = other.type;
}

//this destructor doesn't really do anything...
Follower::~Follower() { 
    cout << "Follower sacrificed >:)" << endl;
}

// Displays Follower info
void Follower::displayStatus() const {
    cout << "Name: " << name
         << " | Devotion: " << devotion 
         << " | Type: " << type << endl;
}

// Static getters
int Follower::getResources() {
    return resourcePool;
}

int Follower::getFaith() {
    return faith;
}

//overloaded << operator
//marked as friend so it can directly access f's private members
ostream& operator<<(ostream& os, const Follower& f) {
    os << "Name: " << f.name 
    << " | Devotion: " << f.devotion 
    << "Type: " << f.type << endl;
    return os;
}
