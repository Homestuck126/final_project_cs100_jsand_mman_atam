#ifndef __QUEST_HPP__
#define __QUEST_HPP__
#include <string>
#include <iostream>
#include "Tile.hpp"
class Quest 
{
private:
std::string intro;
std::string conclude;
std::string objective;
bool active;
Tile* Qend;
Tile* Qstart;
public:
Quest(std::string, std::string, std::string, Tile*, Tile*);
~Quest();
bool getStatus();
void toggleStatus();
Tile* getStart();
Tile* getEnd();
void PrintObj();
void PrintIntro();
void PrintConclusion();
};

#endif //__QUEST_HPP__
