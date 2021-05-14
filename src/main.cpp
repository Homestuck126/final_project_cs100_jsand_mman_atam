#include "../header/Tile.hpp"
#include "../header/Map.hpp"
#include "../header/Questlog.hpp"
#include "../header/Quest.hpp"
#include <iostream>
struct passer
{
//struc to pass through methods 
	QuestLog* Qu = nullptr;
	Map* Ma= nullptr;
};

passer generate()
{
//ya basic world
Tile* beginning = new Tile ("We at cool space town bois", 1);
Tile* green = new Tile ("Green planet" ,1);
Tile* blue = new Tile ("Blue planet", 1);
Tile* red = new Tile ("Red planet" ,1);
Tile* rainbow = new Tile ("RAINBOW WORLDDDDDDDDDDDDDDDDDDDDDDDDDDD" ,1);
Map* test = new Map(beginning);
test->insertTile(beginning);
test->insertTile(green);
test->insertTile(blue);
test->insertTile(red);
test->insertTile(rainbow);
test->setLoc(beginning);

//set adjacencies
beginning->setAdj(rainbow, green, blue, red);
rainbow->setAdj(nullptr, beginning, nullptr ,nullptr);
green->setAdj(beginning, nullptr, nullptr ,nullptr);
blue->setAdj(nullptr,  nullptr ,nullptr, beginning);
red->setAdj(nullptr, nullptr,beginning ,nullptr);
//associate quests with Tiles
QuestLog* quests = new QuestLog();
Quest* quest1 = new Quest("welcome to the game", "go to red planet" , "ayy lmao red planet",beginning , red);
Quest* quest2 = new Quest("now go explore m8" , "Explore =)" , "welcome back home", red, beginning);
quests->addQuest(quest1);
quests->addQuest(quest2);
Quest* ending = nullptr;
quests->addQuest(ending);
//using struct to pass to main
passer object;
object.Qu = quests;
object.Ma = test;
return object;
}

int main()
{
passer object = generate();
Map* map = object.Ma;
QuestLog* quests = object.Qu;
char input;
while(input != 'q')
{
//print description
std::cout<<map->getCurrent()->getdescription()<<std::endl;
//check quest end
if(map->getCurrent() == quests->getCurrent()->getEnd())
{
        quests->getCurrent()->PrintConclusion();
	quests->updateQuest();
}
if(quests->getCurrent() == nullptr)
{
	std::cout<< "good job, you followed simple instructions and won this game, be PROUD, celebrate ,go outside. STOP CODING"<<std::endl;
	break; 
}
//check quest start
if(map->getCurrent() == quests->getCurrent()->getStart() && quests->getCurrent()->getStatus() != true )
{
	quests->getCurrent()->toggleStatus();
        quests->getCurrent()->PrintIntro();
}
//user input
std::cout<< "l to move left, r to move right, u to move up, d to move down"<<std::endl;
std::cout<< "o to check objective"<<std::endl;
std::cin>>input;
//determine user input
if(input == 'o')
quests->getCurrent()->PrintObj();
else
map->move(input);
std::cout<<"======================================================================================" <<std::endl;
}

//deletion
delete map;
delete quests;
}
