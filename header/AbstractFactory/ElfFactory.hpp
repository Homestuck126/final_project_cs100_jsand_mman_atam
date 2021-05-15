#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__


//#include "GearFactory.hpp"
#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/GearFactory.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/ConcreteWeapons/Bow.hpp"

class ElfFactory: public GearFactory {

	public:
		Weapon* createWeapon() {
			Bow* newBow = new Bow();
			return newBow;
		}

		Armor * createArmor() {
			return new LightArmor();
		}

};

#endif
