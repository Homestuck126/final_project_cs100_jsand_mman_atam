#include "../header/Tile.hpp"
#include "../header/Map.hpp"
#include <iostream>

Map* generatemap()
{
Tile* beginning = new Tile ("sup I am a cool thing", 1);
Tile* top = new Tile ("Sup I am top" ,1);
Tile* right = new Tile ("sup I am right", 1);
Tile* bot = new Tile ("Sup I am bot" ,1);
Tile* left = new Tile ("Sup I am left" ,1);
Map* test = new Map(beginning);
test->insertTile(beginning);
test->insertTile(top);
test->insertTile(bot);
test->insertTile(left);
test->insertTile(right);
test->setLoc(beginning);
beginning->setAdj(left, right, top, bot);
left->setAdj(nullptr, beginning, nullptr ,nullptr);
right->setAdj(beginning, nullptr, nullptr ,nullptr);
top->setAdj(nullptr,  nullptr ,nullptr, beginning);
bot->setAdj(nullptr, nullptr,beginning ,nullptr);
return test;
}

int main()
{
Map* map = generatemap();
std::cout<<map->getCurrent()->getdescription();

char input;
while(input != 'q')
{
std::cin>>input;
map->move(input);
std::cout<<map->getCurrent()->getdescription();

}
std::cout<<"HELLO WORLD"<<std::endl;	
}
