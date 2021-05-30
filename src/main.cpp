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


	

CharMenu * charM = new CharMenu(map, quests);
bool check = true;

while(check) {
	
		charM->print();
		charM->setChoice();

		std::cout << "-----------" << std::endl;

		check = charM->getFlag();
	}
//deletion
delete charM;
delete generation;
delete play1;
}
