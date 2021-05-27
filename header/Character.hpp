#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_
#include <string>
#include "Inventory.hpp"
class Character {
    public:
        Character(Weapon* wpn, Armor* arm, int dmg, int HP, int lvl){
            name="";
	    pack= new Inventory(wpn, arm);
            damage=dmg+(lvl*3);
            max_HP=HP+(lvl*5);
            cur_HP=max_HP;
            experience=10*(lvl+1);
            level=lvl;
        }
        ~Character(){delete pack;}
        void setName(std::string n){name = n;} 	//Set name of Character post construction
	std::string getName(){return name;}	//Getter for Character name
	int getDamage(){return (damage+pack->getWeaponVal());}  //Getter funtion for Damage
        int getProtection(){return pack->getArmorVal();}        //Getter for Armor Damage Reduction
        int getMaxHP(){return max_HP;}                          //Getter funtion for Max Health
        int getCurHP(){return cur_HP;}                          //Getter funtion for Current Health
        int getExperience(){return experience;}                 //Getter funtion for Experience
        int getLevel(){return level;}                           //Getter funtion for Level
        int takeDamage(int incoming){
            cur_HP-=(incoming-pack->getArmorVal());
            if(cur_HP<=0){
                cur_HP=0;
            }
            return cur_HP;
        }
    
    protected:
	std::string name;   //Character's Name
        Inventory* pack;    //Character's Inventory
        int damage;         //Base Damage Stat
        int max_HP;         //Maximum Health Stat
        int cur_HP;         //Current Health Amount
        int experience;     //Current Experience Amount
        int level;          //Current Level
};
#endif
