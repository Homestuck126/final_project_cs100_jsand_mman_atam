#ifndef __MAP_HPP__
#define __MAP_HPP__
#include "Tile.hpp"
#include <vector>
#include <iostream>
class Map : public Tile
{
	private: 
	Tile* current;
	std::vector<Tile*> list;
	public:
	Map(Tile*);
	~Map();
	bool move(int);
	Tile* getCurrent();
	void setLoc(Tile*);
	void insertTile(Tile*);
};
#endif //__MAP_HPP__
