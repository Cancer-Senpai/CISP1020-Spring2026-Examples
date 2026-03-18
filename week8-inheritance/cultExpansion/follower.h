#ifndef FOLLOWER_H
#define FOLLOWER_H

#include <string>

//generic Follower class
class Follower {
protected:
    std::string name;
    int devotion;
    std::string type;

    // Shared among all Followers
    static int resourcePool;
    static int faith;

public:
    // Constructors
    Follower();
    Follower(std::string name);
    //copy constructor
    Follower(const Follower& other);
    //destructor (should be virtual)
    virtual ~Follower();

    // Generic performAction- pure virtual function that
    // isn't defined for Follower, but must be defined
    // in derived classes
    virtual void performAction() = 0;

    // Display individual status
    void displayStatus() const;

    // Static getters
    static int getResources();
    static int getFaith();

    //overloaded operator
    friend std::ostream& operator<<(std::ostream& os, const Follower& f);
};

#endif