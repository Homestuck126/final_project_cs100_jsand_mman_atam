#ifndef __CHARACTER_FACTORY_TESTS_HPP
#define __CHARACTER_FACTORY_TESTS_HPP


#include "gtest/gtest.h"

#include "../header/CharacterFactory.hpp"

TEST(Generate_Enemy_Tests, Generate_Race1){
	CharacterFactory* fact=new CharacterFactory();
	Character* test = fact.getEnemy(0);
	EXPECT_EQ(test->getDamage(),20);
	EXPECT_EQ(test->getProtection(),10);
	EXPECT_EQ(test->getMaxHP(), 100);
	EXPECT_EQ(test->getCurHP(), 100);
	EXPECT_EQ(test->getExperience(), 10);
	EXPECT_EQ(test->getLevel(), 0);
	delete test;
	delete fact;}



#endif
