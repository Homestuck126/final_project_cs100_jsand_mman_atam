#ifndef __QUESTLOG_CPP__
#define __QUESTLOG_CPP__
#include "../header/Questlog.hpp"
#include <iostream>
QuestLog::QuestLog()
{
currQuest =0;
}
QuestLog::~QuestLog()
{
std::cout<<"hi"<<std::endl;
delete quests[0];
}
Quest* QuestLog::getCurrent()
{
return quests[currQuest];
}
void QuestLog::addQuest(Quest* input)
{
quests[size] = input;
size++;
}
void QuestLog::updateQuest()
{
currQuest = currQuest+1;
}
void QuestLog::checkQuest()
{
quests[currQuest]->PrintObj();
}
#endif //__QUESTLOG_CPP__
