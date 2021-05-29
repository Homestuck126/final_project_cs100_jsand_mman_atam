#ifndef __GEARFACTORY_HPP__
#define __GEARFACTORY_HPP__


#include <string>


#include "Armor.hpp"
#include "Weapon.hpp"

class GearFactory {
	
	public:

		virtual Armor *createArmor (int x) const = 0;
		virtual Weapon *createWeapon(int x) const = 0;
};

class ElfFactory: public GearFactory {

	public:
		Weapon* createWeapon(int x) const override {
			Weapon* newWpn;
			 switch(x){
                                case 0:
					newWpn = new ConcreteW2();
                                        break;
                                case 1:
					newWpn = new ConcreteW4();
                                        break;
                        }
			return newWpn;
		}

		Armor * createArmor(int x) const override{
			Armor* newArm;
			 switch(x){
                                case 0: 
					newArm = new ConcreteA4();
                                        break;
                                case 1:
					newArm = new ConcreteA1();
                                        break;
                        }
			return newArm;
		}
};

class OrcFactory: public GearFactory {

        public:
                Weapon* createWeapon(int x) const override {
                        Weapon* newWpn;
			switch(x){
				case 0:
					newWpn = new ConcreteW1();
					break;
				case 1: 
					newWpn = new ConcreteW3();
					break;			
			}
                        return newWpn;
                }

                Armor * createArmor(int x) const override{
                        Armor* newArm;
			 switch(x){
                                case 0:
					newArm = new ConcreteA3();
                                        break;
                                case 1:
					newArm = new ConcreteA2();
                                        break;
                        }
                        return newArm;
                }
};
#endif
