#ifndef __ORCFACTORY_HPP__
#define __ORCFACTORY_HPP__


#include "GearFactory.hpp"

#include "ConcreteObjects/ConcreteWeapons/Axe.hpp"

#include "ConcreteObjects/ConcreteArmors/HeavyArmor.hpp"



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
