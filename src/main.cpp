#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include "../header/Intitialization/InitialPlayer.hpp"

#include "../header/Menu.hpp"

#include <iostream>

int main()
{
Map* map = new Map();
QuestLog* quests = new QuestLog();


CharacterFactory *makePlayer = new CharacterFactory();
Player* player;

InitialPlayer* play1 = new InitialPlayer(makePlayer, player);
player = play1->createPlayer();

initialization* generation = new initialization(map,quests);


//MapMenu *newM = new MapMenu();
//MapMenu *mapM = new MapM(map);

//newM->print();
/*
int validation = 0;
CharMenu * charM = new CharMenu(map, quests);
while(charM->getFlag()) {
	charM->print();
	charM->setChoice();
	charM->getFlag();
	
		while(validation != 1) {
			std::cout << "enter 1" << std::endl;
			std::cin >> validation;
			
		
		}

		system("clear");


	
	//if(!charM->getFlag() ) {

	//	break;
}

//	system("clear");
	
//}

//charM->print();
//charM->setChoice();

*/

CharMenu * charM = new CharMenu(map, quests);
bool check = true;

while(check) {
	
		charM->print();
		charM->setChoice();
		//charM->getFlag();

		std::cout << "-----------" << std::endl;

		check = charM->getFlag();
	}
	/*
        charM->print();
        charM->setChoice();
        charM->getFlag();
	
	std::cout << "Press1" << std::endl;

        charM->print();
        charM->setChoice();
        charM->getFlag();

	std::cout << "Press 2" << std::endl;



       charM->print();
        charM->setChoice();
        charM->getFlag();
	
	std::cout << "Press3 " << std::endl;
*/
//deletion
delete generation;
delete play1;
}
