#ifndef __CHARACTER_TEST_HPP_
#define __CHARACTER_TEST_HPP_

#include "gtest/gtest.h"

#include "../objects/Character.hpp"

TEST(Character_Getter_Tests, Default_Damage){
    Character* test = new Character();
    EXPECT_EQ(test->getDmg(),"0");}

TEST(Character_Getter_Tests, Default_Current_Health){
    Character* test = new Character();
    EXPECT_EQ(test->getCurHP(),"0");}

TEST(Character_Getter_Tests, Default_Max_Health){
    Character* test = new Character();
    EXPECT_EQ(test->getMaxHP(),"0");}

TEST(Character_Getter_Tests, Default_Level){
    Character* test = new Character();
    EXPECT_EQ(test->getLevel(),"0");}

TEST(Character_Getter_Tests, Default_Experience){
    Character* test = new Character();
    EXPECT_EQ(test->getExp(),"0");}

TEST(Character_Getter_Tests, Input_Damage){
    Character* test = new Character(10,100,1);
    EXPECT_EQ(test->getDmg(),"10");}
TEST(Character_Getter_Tests, Input_Current_Health){
    Character* test = new Character(10,100,1);
    EXPECT_EQ(test->getCurHP(),"100");}
TEST(Character_Getter_Tests, Input_Max_Health){
    Character* test = new Character(10,100,1);
    EXPECT_EQ(test->getMaxHP(),"100");}
TEST(Character_Getter_Tests, Input_Level){
    Character* test = new Character(10,100,1);
    EXPECT_EQ(test->getLevel(),"1");}
TEST(Character_Getter_Tests, Input_Experience){
    Character* test = new Character(10,100,1);
    EXPECT_EQ(test->getExp(),"0");}
