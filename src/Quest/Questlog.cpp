#ifndef __QUESTLOG_CPP__
#define __QUESTLOG_CPP__
#include "../../header/Quest/Questlog.hpp"
#include <iostream>
QuestLog::QuestLog()
{
currQuest =0;
}
QuestLog::~QuestLog()
{
//delete everything
int size = quests.size();
for(unsigned i=0; i< size; i++)
	{
        delete quests.at(i);
        }
}


Quest* QuestLog::getCurrent()
{
return quests.at(currQuest);
}
void QuestLog::addQuest(Quest* input)
{
quests.push_back(input);
}
void QuestLog::updateQuest()
{
currQuest = currQuest+1;
}
std::string QuestLog::checkQuest()
{
return quests.at(currQuest)->getObj();
}
bool QuestLog::compareQuest(Tile* Tile)
{
if(Tile == this->getCurrent()->getEnd())
{
        std::cout<<this->getCurrent()->getConclusion()<<std::endl;
        updateQuest();
}
if(this->getCurrent() == nullptr)
{
        std::cout<< "good job, you followed simple instructions and won this game, be PROUD, celebrate ,go outside. STOP CODING"<<std::endl;
        return true;
}
//check quest start
if(Tile == this->getCurrent()->getStart() && this->getCurrent()->getStatus() != true )
{
        this->getCurrent()->toggleStatus();
        std::cout<<this->getCurrent()->getIntro()<<std::endl;
}

}
#endif //__QUESTLOG_CPP__
