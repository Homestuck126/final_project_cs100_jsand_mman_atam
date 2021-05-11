#ifndef __Map_HPP__
#define __MAP_HPP__
#include "Tile.hpp"
#include <vector>
class Map : public Tile
{
	private: 
	Tile* current;
	vector <Tile> list;
	public:
	Map();
	~Map();
	void move(char a);
	Tile* getCurrent();
	void insertTile();
}
#endif //__MAP_HPP__
