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
	    level = lvl;
        }
	Character(std::string n, Weapon* wpn, Armor* arm, int dmg, int HP, int lvl){
            name=n;
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

class Player : public Character {
    public:
	Player(std::string n, Weapon* wpn, Armor* arm, int dmg, int HP){
		name=n;
		damage=dmg;
		cur_HP=max_HP=HP;
		experience = 0;
		int level=0;
		pack = new Inventory(wpn, arm, 5);
	}
	~Player(){delete pack;}
	void Heal(){	//Used to heal character using healing item from inventory
		if(pack->getHealing()>=1){
			cur_HP+=20;
			if(cur_HP>max_HP){
				cur_HP=max_HP;
			}
			pack->changeHealing(-1);
			std::cout<< "Healed!!!\nCurrent Health is now: " << cur_HP <<"\\" <<max_HP <<std::endl;
			std::cout<< pack->getHealing()<< " Health Items Remaining\n\n"
		}
		else{
			std::cout<<"No Health Items Available!!!"<<std::endl;
		}		
	}
	void swapWeapon(Weapon* wpn){ //Replace equipped weapon with new weapoon
		std::cout << pack->getWeapon()->getName()<< " discarded!" << std::endl <<std::endl;
	
		pack->setWeapon(wpn);
	
		std::cout << pack->getWeapon()->getName()<< " equipped!" << std::endl <<std::endl;
		}
	void swapArmor(Armor* arm){  //Replace equipped armor with new armor
                std::cout << pack->getArmor()->getName()<< " discarded!" << std::endl <<std::endl;

                pack->setArmor(arm);

                std::cout << pack->getArmor()->getName()<< " equipped!" << std::endl <<std::endl;
	}
	void addHeal(int amt){	      //Used to increase the number of healing items in player inventory
		pack->changeHealing(amt);
	}
	void addXP(int xp){	     //Used to increase amount of experience of player. Handles leveling
		experience += xp;

		if(experience>=(level*50)){
			experience-=(level*50);
			std::cout << "Congratulations! " << name << "has leveled up and is now level " << ++level;
		}

	}
};
#endif
