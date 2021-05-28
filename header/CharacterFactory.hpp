#ifndef __CHARACTER_FACTORY_HPP_
#define __CHARACTER_FACTORY_HPP_


#include "AbstractFactory/GearFactory.hpp"
#include "Character.hpp"

class CharacterFactory {
	private:
		GearFactory* ElfFact;
		GearFactory* OrcFact;
	public:
		CharacterFactory(){
			ElfFact = new ElfFactory();
			OrcFact = new OrcFactory();}
		~CharacterFactory(){
			delete ElfFact;
			delete OrcFact;}
		Character* getEnemy(int x){
			Character* enemy;
			Weapon* wpn;
			Armor* arm;
			switch(x){
				case 0:
					wpn = ElfFact->createWeapon();
					arm = ElfFact->createArmor();
					enemy = new Character("Default Elf",wpn, arm, 10, 100, 30);
					break;	
				case 1:
                                        wpn = OrcFact->createWeapon();
                                        arm = OrcFact->createArmor();
                                        enemy = new Character("Default Orc",wpn, arm, 15, 80, 30);
                                        break;
				}
			return enemy;
			}
			
};


#endif
