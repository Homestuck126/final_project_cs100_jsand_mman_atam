#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_
#include "../mockClasses/mockInventory.hpp"
class Character {
    public:
        Character(){
            pack= new Inventory();
            damage=0;
            max_HP=0;
            cur_HP=0;
            experience=0;
            level=0;
        }
        ~Character(){delete pack;}
        int getDamage(){return (damage+pack->getWeapon());}         //Getter funtion for Damage
        int getMaxHP(){return max_HP;}          //Getter funtion for Max Health
        int getCurHP(){return cur_HP;}          //Getter funtion for Current Health
        int getExperience(){return experience;} //Getter funtion for Experience
        int getLevel(){return level;}           //Getter funtion for Level
    
    protected:
        Inventory* pack; //Character's Inventory
        int damage;     //Base Damage Stat
        int max_HP;     //Maximum Health Stat
        int cur_HP;     //Current Health Amount
        int experience; //Current Experience Amount
        int level;      //Current Level
};
#endif