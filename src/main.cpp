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


MapMenu *newM = new MapMenu();
//MapMenu *mapM = new MapM(map);

newM->print();










//deletion
delete generation;
delete play1;
}
