#ifndef __BOW_HPP__
#define __BOW_HPP__



#include "../../Weapon.hpp"


class Bow : public Weapon {
	private:
		std::string name;
		int attackDamage; //needed if its inheriting?
	public:
		Bow() {
		 	this->name = "Bow";
			this->attackDamage = 10;
		}

		std::string getName() const override {
			return name;
		 	
		}
		int getAttackDmg() const override {
			return attackDamage;
		}


};






#endif
