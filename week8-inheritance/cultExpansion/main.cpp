#include <iostream>
#include <vector>
#include "lamb.h"
#include "bee.h"

using namespace std;

// Function prototypes
void showMenu();
void showCultStatus(const vector<Follower*>& cult);
void printMembers(const vector<Follower*>& cult);

int main() {
    vector<Follower*> cult;

    // Start with one Lamb
    cult.push_back(new Lamb("The Lamb"));

    //Add a Bee
    cult.push_back(new Bee("Buzz"));

    //print lamb info using overloaded <<
    //cout << "Print lamb using overloaded <<" << endl;
    //cout << *(cult[0]) << endl;

    showCultStatus(cult);

    //ask Lamb to performAction
    cult[0]->performAction();

    //ask Bee to performAction
    cult[1]->performAction();

    //sacrifice!
    cout << cult.size() << endl;
    delete cult[1]; //this doesn't modify the vector size
    cult.pop_back();

    showCultStatus(cult);

    //free memory (destroy the cult!)
    for (size_t i = 0; i < cult.size(); i++) {
        delete cult[i];
    }

    //clear vector in case we want to use it later
    cult.clear();
    
    return 0;
}

void showCultStatus(const vector<Follower*>& cult) {
    cout << "\n--- Cult Status ---\n";
    cout << "Total Followers: " << cult.size() << endl;
    cout << "Resources: " << Follower::getResources() << endl;
    cout << "Faith: " << Follower::getFaith() << endl;

    cout << "\nIndividual Members:\n";
    printMembers(cult);
}

void printMembers(const vector<Follower*>& cult) {
    for (size_t i = 0; i < cult.size(); i++) {
        cout << i + 1 << ". ";
        cult[i]->displayStatus();
    }
}