#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__


#include "../header/GearFactory.hpp"

class ElfFactory(): public GearFactory {

	public:
		Weapon* createWeapon() {
			return new Bow();
		}

		Armor * createArmor() {
			return new Light();
		}

};

#endif
