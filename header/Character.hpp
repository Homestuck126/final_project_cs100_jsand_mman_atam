#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_
#include "Inventory.hpp"
class Character {
    public:
        Character(Weapon* wpn, Armor* arm, int dmg, int HP, int lvl){
            pack= new Inventory(wpn, arm);
            damage=dmg+(lvl*3);
            max_HP=HP+(lvl*5);
            cur_HP=max_HP;
            experience=10*lvl;
            level=lvl;
        }
        ~Character(){delete pack;}
        int getDamage(){return (damage+pack->getWeaponVal());}  //Getter funtion for Damage
        int getProtection(){return pack->getArmorVal();}        //Getter for Armor Damage Reduction
        int getMaxHP(){return max_HP;}                          //Getter funtion for Max Health
        int getCurHP(){return cur_HP;}                          //Getter funtion for Current Health
        int getExperience(){return experience;}                 //Getter funtion for Experience
        int getLevel(){return level;}                           //Getter funtion for Level
        int takeDamage(int incoming){
            cur_HP-=incoming;
            if(cur_HP<=0){
                cur_HP=0;
            }
            return cur_HP;
        }
    
    protected:
        Inventory* pack;    //Character's Inventory
        int damage;         //Base Damage Stat
        int max_HP;         //Maximum Health Stat
        int cur_HP;         //Current Health Amount
        int experience;     //Current Experience Amount
        int level;          //Current Level
};
#endif