#ifndef LAMB_H
#define LAMB_H
#include "follower.h"

#include <string>

class Lamb : public Follower {
public:
    // Constructors
    Lamb();
    Lamb(std::string name);
    Lamb(const Lamb& other); //copy constructor

    //destructor
    // (automatically virtual since parent is virtual, but ok to be redundant)
    virtual ~Lamb();

    // Actions
    //Lamb has its own action
    void performAction() override;
};

#endif