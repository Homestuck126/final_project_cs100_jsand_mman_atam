#ifndef __INVENTORY_HPP_
#define __INVENTORY_HPP_
#include<iostream>
class Inventory {
    private:
        //Weapon* To Be Added
        int numHealingItems;
    public:
        Inventory(/*Weapon Object,*/int initHeal){}
        ~Inventory(){/*delete Weapon* */}
        int getHealing(){return numHealingItems;}
        //int getWeaponDmg(){return weapon->getValue()}
        //Weapon* getWeapon(){return weapon;}
        int useHealing(){
                if(!numHealingItems){
                    return 0;
                }
                else{
                    numHealingItems--;
                    return 20; //Value of healing item
                }

            }
        void printInventory(){

            std::cout << /*"Weapon: << weapon.getName() << "Damage: " << weapon.getValue() << std::endl;*/
            std::cout << "Health Potions: " << numHealingItems << std::endl;
        };
};

#endif