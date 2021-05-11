#ifndef __TILE_HPP__
#define __TILE_HPP__
#include <string>
class Tile 
{
	private:
	Tile* left;
	Tile* right;
	Tile* top;
	Tile* bottom;
	std::string description;
	bool enemy,quest;
	//enemy object
	public:
	Tile(std::string,bool); //enemy object
	void getdescription();
	void setAdj(Tile* ,Tile*, Tile* ,Tile*);
	~Tile();
};

#endif //__TILE_HPP__
