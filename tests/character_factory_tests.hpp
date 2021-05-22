#ifndef __CHARACTER_FACTORY_TESTS_HPP
#define __CHARACTER_FACTORY_TESTS_HPP


#include "gtest/gtest.h"

#include "../header/CharacterFactory.hpp"

TEST(Generate_Enemy_Tests, Generate_Race1_Stat1){
	CharacterFactory* fact=new CharacterFactory();
	Character* test = fact->getEnemy(0);
	EXPECT_EQ(test->getDamage(),20);;
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat2){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
	EXPECT_EQ(test->getProtection(),10);;
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat3){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getMaxHP(), 100);;
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat4){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getCurHP(), 100);;
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat5){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getExperience(), 10);;
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat6){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getLevel(), 0);
	delete test;
	delete fact;}



#endif
