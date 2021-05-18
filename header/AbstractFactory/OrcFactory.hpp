#ifndef __ORCFACTORY_HPP__
#define __ORCFACTORY_HPP__


#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/GearFactory.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/ConcreteWeapons/Axe.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/ConcreteArmors/HeavyArmor.hpp"



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
