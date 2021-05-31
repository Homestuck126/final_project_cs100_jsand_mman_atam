#ifndef __MENU_HPP__
#define __MENU_HPP__

#include "Quest/Questlog.hpp"

#include <string>
#include "Character.hpp"
#include "Map/Map.hpp"
#include <iostream>


class Menu {
        public:
                virtual void menu() = 0;
	        virtual bool getFlag() = 0;
        protected:
                char choice;
                bool flag;
};
class MoveMenu : public Menu {
        private:
	Map* map;
	public:
		MoveMenu(Map* m){
			this->map=m;
			choice= ' ';
			flag=false;
			}
						
                bool getFlag(){
			if(flag){
				flag=false;
				return true;}
			else return false;
			}
                void menu(){
				std::cout << "Where would you like to go?\n"
					<<"1 - West\n"
					<<"2 - East\n"
					<<"3 - North\n"
					<<"4 - South\n"
					<<"5 - Cancel Movement\n";
				std::cin >> choice;
				
				while(choice < '1' || choice > '5') {
					std::cout << "Wrong input, try again" << std::endl;
					std::cin >> choice;
				}
				
				if(choice != '5') {
				map->move(choice);
				flag = true;}
			}
					
		
};

class CombatMenu : public Menu {
        private:
		Player* p;
		Character* e;
	public:
		CombatMenu(Character *enemy, Player *player){
			choice = 0;
			flag = false;
			this->p=player;
			this->e=enemy;
		}
                void menu(){
				while(choice <'1' || choice >'3'){
					std::cout <<"What do you do?\n"
						<<"1 - Attack " << e->getName() <<std::endl 
						<<"2 - Heal\n"
						<<"3 - Flee\n";
					std::cin >> choice;
					switch(choice){
						case '1':
							std::cout << p->getName() << "attacks " << e->getName() << "for " 
							<< (p->getDamage() - e->getProtection()) << " damage!\n";
							e->takeDamage(p->getDamage());
							break;
						case '2':
							std::cout <<"Attempting to Heal 20 HP...\n";
							p->Heal();
							break;
						case '3':
							std::cout << "Only cowards run from a fight!\n";
							flag=true;
							break;
						default: 
							std::cout << "Invalid\n";
							break;
					}
				}	
		}
                bool getFlag(){
			if(flag){
				flag=false;
				return true;}
			else return false;	
			}
};
class CoreMenu : public Menu {
        private:
		MoveMenu *compass;	
		Map* newMap;
		Player* player;
		QuestLog* newQuests;
	public:

		CoreMenu (Map* map, QuestLog * quests, Player *p) {
				compass = new MoveMenu(map);
				this->newMap = map;
				this->newQuests = quests;
				this->player = p;
				flag = true;
				}
                void menu(){
			std::cout << newMap->getCurrent()->getdescription() +
						"\n1 - Move \n2 - Check Objective\n3 - Check Inventory\n4 - Quit Game" << std::endl;
			  std::cin >> choice;
				  switch(choice) {
					case '1':
						compass->menu();
															
						break;
					case '2':
						std::cout << newQuests->getCurrent()->getObj() << std::endl;	
						
						break;
					case '3':
					       player->checkInventory();
						break;
					case '4':
						flag = false;
						break;
					}

				}
		

		
                bool getFlag(){
			if(newQuests->compareQuest(newMap->getCurrent())) {
					flag = false;
				}
			return flag; 		

		}
};

#endif
