#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__


#include "GearFactory.hpp"

#include "ConcreteObjects/ConcreteWeapons/Bow.hpp"

#include "ConcreteObjects/ConcreteArmors/LightArmor.hpp"

class ElfFactory: public GearFactory {

	public:
		Weapon* createWeapon() const override {
			Bow* newBow = new Bow();
			return newBow;
		}

		Armor * createArmor() const override{
			Armor* newArmor =  new LightArmor();
			return newArmor;
		}

};

#endif
