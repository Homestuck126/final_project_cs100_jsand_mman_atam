#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include "../header/GearFactory.hpp"
class Weapon {
        protected:
                double attackDamage;
                double attackSpeed;
                std::string name;
        public:
                virtusl ~Weapon(){};
                virtual std::string getName() const = 0;
};

#endif
