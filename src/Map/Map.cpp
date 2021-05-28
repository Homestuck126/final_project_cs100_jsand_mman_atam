#ifndef __MAP_CPP__
#define __MAP_CPP__
#include "../../header/Map/Map.hpp"
Map::Map()
{
	
}
Map::Map(Tile* input)
{
current = input;
}
Map::~Map()
{
//delete everything
int size = list.size();
for(unsigned i=0; i< size; i++)
{
	delete list.at(i);
}
}
bool Map::move(int input)
{
bool move = false;
//bool flag to check if moved

//input validation
int in = input;
//movement
	if(in==1 && current->getNext(1) !=nullptr)
	{
	move = true;
	current= current->getNext(1);
	}
        if(in==2 && current->getNext(2) !=nullptr)
        {
        move = true;
        current= current->getNext(2);
        }
        if(in==3 && current->getNext(3) !=nullptr)
        {
        move = true;
        current= current->getNext(3);
        }

        if(in==4 && current->getNext(4) !=nullptr)
	{
        move = true;
        current= current->getNext(4);
        }
	//if didn't move 
	if (move == false)
	{
	std::cout<<"You cannot go that way."<<std::endl;
	}
	//return
	return move;

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
