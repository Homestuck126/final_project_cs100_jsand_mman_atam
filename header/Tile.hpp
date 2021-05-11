#ifndef __TILE_HPP__
#define __TILE_HPP__
#include <string>
class Tile 
{
	private:
	Tile* left, right ,top ,bottom;
	string description;
	bool enemy,quest;
	//enemy object
	public:
	Tile(string,bool) //enemy object
	void getdescription();
	void setAdj(Tile* ,Tile*, Tile* ,Tile*);
	~Tile();
};

#endif //__TILE_HPP__
