#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include "../header/Intitialization/InitialPlayer.hpp"

#include "../header/Menu.hpp"
#include "../header/Combat.hpp"
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


CoreMenu *newCore = new CoreMenu(map, quests, player);
bool check = true;

while(check) {

	newCore->menu();
	std::cout << "----" << std::endl;
	check = newCore->getFlag();		

}


/*
Combat *newCom = new Combat(makePlayer);
//newCom->startCombat();	

CharMenu * charM = new CharMenu(map, quests);
bool check = true;

while(check) {
	
		charM->print();
		charM->setChoice();

		std::cout << "-----------" << std::endl;

		check = charM->getFlag();

		newCom->startCombat();


		
		
		
	}


*/
//deletion
//delete newCom;
//delete charM;
delete generation;
delete play1;
}
