#ifndef __QUESTLOG_HPP__
#define __QUESTLOG_HPP__
#include "Quest.hpp"
class QuestLog 
{
private:
Quest** quests;
int currQuest;
int size;
public:
QuestLog();
~QuestLog();
Quest* getCurrent();
void addQuest(Quest*);
void updateQuest();
void checkQuest();
};

#endif //__QUESTLOG_HPP___
