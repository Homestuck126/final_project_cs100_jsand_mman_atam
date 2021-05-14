#ifndef __GEARFACTORY_HPP__
#define __GEARFACTORY_HPP__

#include <string>

class GearFactory() {
	
	virtual Armor *createArmor () const = 0;
	virtual Weapon *createWeapon() const = 0;

};

class Armor {
	protected:
		double healthIncrease;
		double resistance;
		std::string name;
	public:
		virtual ~Armor() {};
		virtual std::string getName () const = 0;
		


};

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
