#ifndef __WEAPON_HPP
#define __WEAPON_HPP

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

class Axe : public Weapon {
	private:
		std::string name;
		int attackDamage;
        public:
		Axe(){this->name = "Axe";
		      this->attackDamage = 7; }
                std::string getName() const override {

                        return name;
                }
		int getAttackDmg() const override {
			return attackDamage;
		}
};

class Bow : public Weapon {
	private:
		std::string name;
		int attackDamage; //needed if its inheriting?
	public:
		Bow() {
		 	this->name = "Bow";
			this->attackDamage = 10;
		}

		std::string getName() const override {
			return name;
		 	
		}
		int getAttackDmg() const override {
			return attackDamage;
		}
};
#endif
