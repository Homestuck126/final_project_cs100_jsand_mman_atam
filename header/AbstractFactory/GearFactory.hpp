#ifndef __GEARFACTORY_HPP__
#define __GEARFACTORY_HPP__


#include <string>


#include "Armor.hpp"
#include "Weapon.hpp"

class GearFactory {
	
	public:

		virtual Armor *createArmor () const = 0;
		virtual Weapon *createWeapon() const = 0;

};


#endif
