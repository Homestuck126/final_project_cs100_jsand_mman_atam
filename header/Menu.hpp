#ifndef __MENU_HPP__
#define __MENU_HPP__

//#include "../Map.hpp"
//#include "../QuestLog.hpp"

#include <string>
#include "../header/Map/Map.hpp"

class Menu {

	public:
		virtual void print() = 0;
		virtual char getChoice() = 0;
		virtual bool getFlag() = 0;
		virtual void setChoice(char) = 0;
	protected:
		char choice;
		bool flag;
		
};



class MapMenu : public Menu {

        private:
        Map * newMap;

        public:
                MapMenu(Map* map) {this->newMap= map;}
                void print() {
                                std::cout << "1 - Move West\n2 - Move East\n3 - Move North\n4 - Move South" << std::endl;
                                }
                char getChoice() {
                        return choice;
                }
                bool getFlag() {return newMap->move(choice);} //have to implement?

                void setChoice() {std::cin >> choice;}

};






class CharMenu : public Menu {
	
	private:
	MapMenu *mapM;
//	Map *newMap;

	public:
		
		void print() {std::cout << "1 - Move \n2 - Check Objective\n3 - Check Inventory\n4 - Quit Game" << std::endl;}
		
		void setChoice() {
				  std::cin >> choice;
				  switch(choice) {
					case '1':
						mapM->print();
						mapM->setChoice();
						mapM->getFlag();				
						break;
					case '2':
						break;
					case '3':
						break;
					case '4':
						flag = false;
						break;
					}

				}
		char getChoice () {return choice;}
		bool getFlag() { //if(quests->compareQuest(map->getCurrent())) {
						return false;
				//	} 
				}


};


class CombatMenu : public Menu {
		 void setChoice(char c) {choice = c;}

		void print () {std::cout << "" << std::endl;}
		char getChoice () {return  choice;}
		bool getFlag() {return false;}

};








#endif
