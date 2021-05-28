#include "../header/Map/Tile.hpp"
#include "../header/Map/Map.hpp"
#include "../header/Quest/Questlog.hpp"
#include "../header/Quest/Quest.hpp"
#include "../header/Intitialization/initialization.hpp"
#include <iostream>

int main()
{
Map* map = nullptr;
QuestLog* quests = nullptr;
initialization* generation = new initialization(map,quests);
char input = ' ';
while(input != 'q')
{
//print description
std::cout<<map->getCurrent()->getdescription()<<std::endl;
//check quest end
if(quests->compareQuest(map->getCurrent()))
break;
std::cout<< "W to move West, E to move east, N to move North, S to move South"<<std::endl;
std::cout<< "o to check objective"<<std::endl;
std::cin>>input;
//determine user input
if(input == 'o')
std::cout<<quests->checkQuest()<<std::endl;
else
map->move(input);
std::cout<<"======================================================================================" <<std::endl;
}

//deletion
delete generation;
}
