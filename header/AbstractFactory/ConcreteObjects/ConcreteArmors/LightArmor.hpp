#ifndef __LIGHTARMOR_HPP__
#define __LIGHTARMOR_HPP__

#include "../../Armor.hpp"
#include <string>

class LightArmor : public Armor {
	
	private:
		std::string name;
		int healthInc;
	public:
		LightArmor() {
			this->name = "LightArmor";
			this->healthInc = 10;
		}
		std::string getName() const override {return name;}
		int getHealth() const override {return healthInc;}
};



#endif
