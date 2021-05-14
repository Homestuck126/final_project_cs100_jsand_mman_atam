#ifndef __QUEST_CPP__
#define __QUEST_CPP__
#include "../header/Quest.hpp"
Quest::Quest(std::string Obj, std::string start, std::string comp, Tile* startTile, Tile* endTile)
{
objective = Obj;
intro = start;
conclude = comp;
Qstart = startTile;
Qend = endTile;
}
Quest::~Quest()
{
objective = "";
intro ="";
conclude = "";
Qstart = nullptr;
Qend = nullptr;
}
void Quest::toggleStatus()
{
if(active)
active =false;
else
active = true;
}
Tile* Quest::getStart()
{
return Qstart;
}
Tile* Quest::getEnd()
{
return Qend;
}
void Quest::PrintObj()
{
std::cout<<objective<<std::endl;
}
void Quest::PrintIntro()
{
std::cout<<intro<<std::endl;
}
void Quest::PrintConclusion()
{
std::cout<<conclude<<std::endl;
}

#endif //__QUEST_CPP__
