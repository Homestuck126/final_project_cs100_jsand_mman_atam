#ifndef __ORCFACTORY_HPP__
#define __ORCFACTORY_HPP__


#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/GearFactory.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/ConcreteWeapons/Axe.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/ConcreteArmors/HeavyArmor.hpp"



class OrcFactory: public GearFactory {

        public:
                Weapon* createWeapon() const override {
                        return new Axe();
                }

                Armor * createArmor() const override  {
                        return new HeavyArmor();
                }

};

#endif
