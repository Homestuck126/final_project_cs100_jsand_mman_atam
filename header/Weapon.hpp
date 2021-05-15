#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include "../header/GearFactory.hpp"
#include <string>

class Weapon {
        protected:
                //double attackDamage;
               //double attackSpeed;
               std::string name;
        public:
                virtual ~Weapon(){};
                virtual std::string getName() const = 0;
};

#endif
