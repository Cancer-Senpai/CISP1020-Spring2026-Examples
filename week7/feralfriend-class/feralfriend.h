#ifndef FERALFRIEND_H
#define FERALFRIEND_H

#include <iostream>
#include <string>

class FeralFriend {
    private:
        std::string name;
        double weight;
        double powerLevel;
        bool status;
    public:
        //constructors
        FeralFriend();
        FeralFriend(std::string);
        FeralFriend(std::string,double,double,bool);

        //getters
        std::string getName() const;
        double getWeight() const;
        double getPowerLevel() const;
        bool getStatus() const;

        //setters
        void setName(std::string);
        void setWeight(double);
        void setPowerLevel(double);
        void setStatus(bool);

        void meow();
        void printFriend() const;
};

#endif