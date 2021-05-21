#ifndef __INVENTORY_HPP_
#define __INVENTORY_HPP_
#include<iostream>
#include<iomanip>
#include"AbstractFactory/Weapon.hpp"
#include "AbstractFactory/Armor.hpp"

class Inventory {
    private:
        Weapon* weapon;
        Armor* armor; 
        int numHealingItems;
    public:
        Inventory(Weapon* wpn, Armor* arm){
            weapon=wpn;
            armor=arm;
            numHealingItems=0;
            }
        Inventory(Weapon* wpn, Armor* arm, int initHeal){
            weapon=wpn;
            armor=arm;
            numHealingItems=initHeal;
            }
        ~Inventory(){
            delete weapon;
            delete armor;
            }
        int getHealing(){return numHealingItems;}
        int getWeaponVal(){return weapon->getAttackDmg();}
        int getArmorVal(){return armor->getHealth();}
        Weapon* getWeapon(){return weapon;}
        Armor* getArmor(){return armor;}
        void setWeapon(Weapon* wpn){
            if(weapon){ //check for nullptr
            delete weapon;
                }
            weapon=wpn;
            std::cout<<weapon->getName() << " is now equipped!" <<std::endl;
            }
        void setArmor(Armor* arm){
            if(armor){ //check for nullptr
            delete armor;
                }
            armor = arm;
            std::cout<<armor->getName() << " is now equipped!" <<std::endl;
            }
        void changeHealing(int amount){
                numHealingItems=numHealingItems+amount;
        }

        void printInventory(){
            std::cout<<"Weapon: " << weapon->getName()<< std::endl
            <<"\tDamage: " << weapon->getAttackDmg()<< std::endl;
             std::cout<<"Armor: " << armor->getName()<< std::endl
            <<"\tHealth Increase: " << armor->getHealth()<< std::endl;
            std::cout << "Health Potions: " << numHealingItems << std::endl; 
        }
        
};

#endif
