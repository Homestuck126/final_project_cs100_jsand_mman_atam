#include "../header/Tile.hpp"
#include <iostream>
int main()
{
Tile* beginning = new Tile ("sup I am a cool thing", 1);
std::string sup = beginning->getdescription();
std::cout<<sup<<std::endl;
std::cout<<"HELLO WORLD"<<std::endl;	
}
