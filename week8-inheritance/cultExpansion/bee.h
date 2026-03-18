#ifndef BEE_H
#define BEE_H
#include "follower.h"

#include <string>

class Bee : public Follower {
public:
    // Constructors
    Bee();
    Bee(std::string name);
    Bee(const Bee& other); //copy constructor

    //destructor
    // (automatically virtual since parent is virtual, but ok to be redundant)
    virtual ~Bee(); //destructor

    // Actions
    void performAction() override;
};

#endif