#ifndef __MENU_HPP__
#define __MENU_HPP__

#include "../Map.hpp"
#include "../QuestLog.hpp"


class Menu {

	public:
		virtual void print() = 0;
		virtual char getChoice() = 0;
		virtual bool getFlag() = 0;
	protected:
		char choice;
		bool flag;
		
};


class CharMenu : public Menu {

	public:
		void print() {std::cout << "1 - Move \n2 - Check Objective\n3 - Check Inventory\n4 - Quit Game" << std::endl;}
		char getChoice () {return (std::cin >> choice;}
		bool getFlag() { return false; }


};


class CombatMenu : public Menu {

		void print () {std::cout << "" << std::endl;}
		char getChoice () {return std::cin >> choice;}
		bool getFlag() {return false;}

};


class MapMenu : public Menu {
	public:
		void print() {std::cout << "1 - Move West\n2 - Move East\n3 - Move North\n4 - Move South" << std::endl};
		char getChoice() {
			return ( std::cin >> choice);
		}
		bool getFlag() {return false;} //have to implement?

		
};






#endif
