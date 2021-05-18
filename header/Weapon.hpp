#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include "../header/GearFactory.hpp"
#include <string>

class Weapon {
        protected:
               std::string name;
	       int attackDamage;
        public:
                virtual ~Weapon(){};
                virtual std::string getName() const = 0;
		virtual int getAttackDmg() const = 0;
};

#endif
