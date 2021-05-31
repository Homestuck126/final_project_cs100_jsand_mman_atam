#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include "../header/Intitialization/InitialPlayer.hpp"

#include "../header/Menu.hpp"
#include "../header/Combat.hpp"
#include <iostream>

int main(){
//Global Generation Interfaces
	CharacterFactory *CharCreator = new CharacterFactory();
	InitialPlayer* pGen = new InitialPlayer();

//World Initialization Interface
	Initialization* worldGen = nullptr;

//Key Object Pointers
	Map* map = nullptr;
	QuestLog* quests = nullptr;
	Player* player = nullptr;

//Control Variables
	char choice = '0';

//Welcome Message

        std::cout << "=========================================\n";
	std::cout << "Welcome to Phantomheart!\n\n";
//Start Menu Loop
	while(choice != '2'){
		std::cout << "***MAIN MENU***\n\nPlease make a selection:\n1 - Start New Game\n2 - Quit\n";
		std::cin >> choice;
		switch(choice){
			case '1':
				std::cout<<"\n\n***NEW GAME***\n\n";
				//Clear Previous Game Objects
				if(player){
				delete player; delete quests; delete map; delete worldGen;
				}
				std::cout<<"**CHARACTER CREATION**\n\n";
				pGen->
				break;
			case '2':
				std::cout <<"\n\n\n\nTHANK YOU FOR PLAYING!!!\n";
				break; 
			default: 
				std::cout << "Invalid Selection\n\n\n";
				break;
		}

	}
	std::cin.clear();
	std::cout << "Press [ENTER] to Exit\n\n";
	std::cin.ignore(100,'\n');	
	delete pGen; 		//delete Player Initializer
	delete CharCreator; 	//delete CharacterFactory
	return 0;
}
