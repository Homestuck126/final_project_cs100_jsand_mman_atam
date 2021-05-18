#ifndef __MOCKEQ_HPP
#define __MOCKEQ_HPP
#include<string>
class Weapon {
    public:
    std::string getName(){return "Shiny Sword";}
    int getValue(){return 100;}
};
class Armor {
    public:
    std::string getName(){return "Chainmail";}
    int getValue(){return 15;}
};
#endif