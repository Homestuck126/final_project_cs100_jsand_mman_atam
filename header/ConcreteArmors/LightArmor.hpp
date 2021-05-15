#ifndef __LIGHTARMOR_HPP__
#define __LIGHTARMOR_HPP__
#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/Armor.hpp"
#include <string>

class LightArmor : public Armor {
	
	private:
		std::string name;
	public:
		LightArmor() {
			this->name = "LightArmor";
		}
		std::string getName() {return name;};

};



#endif
