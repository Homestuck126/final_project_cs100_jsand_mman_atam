#ifndef __QUESTLOG_TEST_HPP__
#define __QUESTLOG_TEST_HPP__

#include "gtest/gtest.h"

#include "../src/Questlog.cpp"

TEST(QuestLogTest, QuestLoggetCurrent) {
        Tile* test1 = new Tile();
        Tile* test2 = new Tile();
    Quest* Quests = new Quest("hi1" , "hi2" , "hi3" ,test1, test2 );
	QuestLog* Questlog = new QuestLog();
Questlog->addQuest(Quests);
    EXPECT_EQ(Questlog->getCurrent(), Quests );
        delete test1;
        delete test2;
        delete Questlog;
}

#endif //QUESTLOG_HPP
