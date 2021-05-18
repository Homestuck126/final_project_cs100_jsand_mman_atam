#ifndef __AXE_HPP__
#define __AXE_HPP__


#include "../../Weapon.hpp"

#include <string>

class Axe : public Weapon {
	private:
		std::string name;
		int attackDamage;
        public:
		Axe(){this->name = "Axe";
		      this->attackDamage = 7; }
                std::string getName() const override {

                        return name;
                }
		int getAttackDmg() const override {
			return attackDamage;
		}



};

#endif
