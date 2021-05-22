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

class OrcFactory: public GearFactory {

        public:
                Weapon* createWeapon() const override {
			Axe * newAxe = new Axe();
                        return newAxe;
                }

                Armor * createArmor() const override  {
			HeavyArmor* newArmor = new HeavyArmor();
                        return  newArmor;
                }
};


#endif
