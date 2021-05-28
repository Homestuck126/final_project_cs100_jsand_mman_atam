#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include <iostream>

int main()
{
Map* map = new Map();
QuestLog* quests = new QuestLog();
initialization* generation = new initialization(map,quests);
int input = 0;
while(input != '6')
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
if(input == '5')
std::cout<<quests->checkQuest()<<std::endl;
else
map->move(input);
std::cout<<"======================================================================================" <<std::endl;
}

//deletion
delete generation;
}
