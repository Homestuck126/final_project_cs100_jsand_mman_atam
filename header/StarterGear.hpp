#ifndef __STARTER_GEAR_HPP
#define __STARTER_GEAR_HPP

#include "AbstractFactory/Weapon.hpp"
#include "AbstractFactory/Armor.hpp"

/*
===================================
Starter Weapons
===================================
*/

class StarterW1: public Weapon {
	public:
		StarterW1(){this->name = "Antique Pistol";
		      this->attackDamage = 9; }
                std::string getName() const override {
                        return name;
                }
		int getAttackDmg() const override {
			return attackDamage;
		}

};
class StarterW2: public Weapon {
        public:
                StarterW2(){this->name = "Worn Rifle";
                      this->attackDamage = 12; }
                std::string getName() const override {
                        return name;
                }
                int getAttackDmg() const override {
                        return attackDamage;
                }

};
class StarterW3: public Weapon {
        public:
                StarterW3(){this->name = "Shock Baton";
                      this->attackDamage = 6; }
                std::string getName() const override {
                        return name;
                }
                int getAttackDmg() const override {
                        return attackDamage;
                }

};

/*
===================================
Starter Armor
===================================
 */

class StarterA1 : public Armor {
	
	public:
		StarterA1() {
			this->name = "Raggedy Vest";
			this->healthInc = 6;
		}
		std::string getName() const override {return name;}
		int getHealth() const override {return healthInc;}
};

class StarterA2 : public Armor {

        public:
                StarterA2() {
                        this->name = "Camoflaged Jacket";
                        this->healthInc = 2;
                }
                std::string getName() const override {return name;}
                int getHealth() const override {return healthInc;}
};

class StarterA3 : public Armor {

        public:
                StarterA3() {
                        this->name = "Repurposed Riot Suit";
                        this->healthInc = 8;
                }
                std::string getName() const override {return name;}
                int getHealth() const override {return healthInc;}
};

#endif
