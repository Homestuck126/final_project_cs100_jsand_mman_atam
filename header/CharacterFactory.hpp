#ifndef __CHARACTER_FACTORY_HPP_
#define __CHARACTER_FACTORY_HPP_

#include <string>
#include "AbstractFactory/GearFactory.hpp"
#include "StarterGear.hpp"
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
		Player* getPlayer(std::string n, int x){
			Player* player;
			switch(x){
				case 0:	player=new Player(n, new StarterW1(), new StarterA1(), 15, 120);
					break;
				case 1: player=new Player(n, new StarterW2(), new StarterA2(), 30, 80);
					break;
				case 2: player=new Player(n, new StarterW3(), new StarterA3(), 5, 160);
					break;
				}		
			return player;
		}	
};


#endif
