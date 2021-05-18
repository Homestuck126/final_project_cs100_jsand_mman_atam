#ifndef __HEAVYARMOR_HPP__
#define __HEAVY_ARMOR_HPP__

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/Armor.hpp"
#include <string>


class HeavyArmor : public Armor {
	private:
		std::string name;
		int healthInc;
        public:
		HeavyArmor() {this->name = "HeavyArmor";
			      this->healthInc = 15;}
                std::string getName() const override {return name;}
		int getHealth() const override {return healthInc;}

};



#endif

