#ifndef __AXE_HPP__
#define __AXE_HPP__

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/GearFactory.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/Weapon.hpp"

#include <string>

class Axe : public Weapon {
	private:
		std::string name;
        public:
		Axe(){this->name = "Axe"; }
                std::string getName() const override {

                        return name;
                }



};

#endif
