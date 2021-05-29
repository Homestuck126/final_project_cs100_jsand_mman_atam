#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include "../header/Intitialization/InitialPlayer.hpp"
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
int input = 0;
while(input != 6)
{
//print description
std::cout<<map->getCurrent()->getdescription()<<std::endl;
//check quest end
if(quests->compareQuest(map->getCurrent()))
break;
std::cout<< "1 to move West, 2 to move east, 3 to move North, 4 to move South"<<std::endl;
std::cout<< "5 to check objective"<<std::endl;
std::cin>>input;
//determine user input

if(input == 5)
{
std::cout<<quests->checkQuest()<<std::endl;
std::cout<<"SUP I AM NOT BROKEN"<<std::endl;
}
else if (input == 6)
break;
else if( !isdigit(input)) {
std::cin >> input;
}
else if(input != 1 && input != 2 && input !=3 && input !=4 && input !=5 && input != 6) {
std::cout << "Invalid input, uses numbers 1-6 on your keyboard to select" << std::endl;
std::cin >> input;
continue;
}
else
map->move(input);
std::cout<<"======================================================================================" <<std::endl;
}

//deletion
delete generation;
delete play1;
}
