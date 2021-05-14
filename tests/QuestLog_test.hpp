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
TEST(QuestLogTest, QuestLogcheckQuest) {
        Tile* test1 = new Tile();
        Tile* test2 = new Tile();
    Quest* Quests = new Quest("hi1" , "hi2" , "hi3" ,test1, test2 );
        QuestLog* Questlog = new QuestLog();
Questlog->addQuest(Quests);
    EXPECT_EQ(Questlog->checkQuest(), "hi2" );
        delete test1;
        delete test2;
        delete Questlog;
}

TEST(QuestLogTest, QuestLogupdateQuest) {
        Tile* test1 = new Tile();
        Tile* test2 = new Tile();
    Quest* Quests1 = new Quest("hi1" , "hi2" , "hi3" ,test1, test2 );
    Quest* Quests2 = new Quest("hi1" , "hi2" , "hi3" ,test1, test2 );
	
        QuestLog* Questlog = new QuestLog();
Questlog->addQuest(Quests1);
Questlog->addQuest(Quests2);
Questlog->updateQuest();
    EXPECT_EQ(Questlog->getCurrent(), Quests2 );
        delete test1;
        delete test2;
        delete Questlog;
}





#endif //QUESTLOG_HPP
