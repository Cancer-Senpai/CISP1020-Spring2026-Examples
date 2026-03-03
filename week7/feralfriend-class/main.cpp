#include <iostream>
#include <string>
#include "feralfriend.h"

int main() {
    FeralFriend fred;
    FeralFriend garfield("Garfield");
    FeralFriend taco("Taco",15,1000000000,0);

    fred.setName("Fred");

    fred.setWeight(600);
    fred.setPowerLevel(9001);
    fred.setStatus(true);

    fred.printFriend();
    garfield.printFriend();
    taco.printFriend();

    fred.meow();
    return 0;
}