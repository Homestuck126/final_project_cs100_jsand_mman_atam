#ifndef __MAP_CPP__
#define __MAP_CPP__
#include "../header/Map.hpp"
Map::Map(Tile* input)
{
current = input;
}
Map::~Map()
{
int size = list.size();
for(unsigned i=0; i< size; i++)
{
	delete list.at(i);
}
}
bool Map::move(char input)
{
	int in = 0; 
	if(input == 'l' || input == 'L')
	in =1;
        if(input == 'r' || input == 'R')
	in =2;
        if(input == 'd' || input == 'D')
	in =3;
        if(input == 't' || input == 'T')
	in =4;

	if(in==1 && current->getNext(1) !=nullptr)
	current= current->getNext(1);
        if(in==2 && current->getNext(2) !=nullptr)
        current= current->getNext(2);
        if(in==3 && current->getNext(3) !=nullptr)
        current= current->getNext(3);
        if(in==4 && current->getNext(4) !=nullptr)
        current= current->getNext(4);
	if (in ==0)
	std::cout<<"invalid input"<<std::endl;

}
void Map::setLoc(Tile* start)
{
	current = start;
}
void Map::insertTile(Tile* input)
{
	list.push_back(input);
}
Tile* Map::getCurrent()
{
return current;
}
#endif //__MAP_CPP__
