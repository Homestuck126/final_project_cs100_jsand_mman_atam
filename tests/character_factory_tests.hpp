#ifndef __CHARACTER_FACTORY_TESTS_HPP
#define __CHARACTER_FACTORY_TESTS_HPP


#include "gtest/gtest.h"

#include "../header/CharacterFactory.hpp"

TEST(Generate_Enemy_Tests, Generate_Race1_Stat1){
	CharacterFactory* fact=new CharacterFactory();
	Character* test = fact->getEnemy(0);
	EXPECT_EQ(test->getDamage(),20);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat2){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
	EXPECT_EQ(test->getProtection(),10);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat3){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getMaxHP(), 100);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat4){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getCurHP(), 100);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Stat5){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getExperience(), 30);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race1_Name){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(0);
        EXPECT_EQ(test->getName(), "Default Elf");
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Stat1){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getDamage(),22);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Stat2){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getProtection(),15);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Stat3){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getMaxHP(), 80);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Stat4){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getCurHP(), 80);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Stat5){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getExperience(), 30);
        delete test;
        delete fact;}

TEST(Generate_Enemy_Tests, Generate_Race2_Name){
        CharacterFactory* fact=new CharacterFactory();
        Character* test = fact->getEnemy(1);
        EXPECT_EQ(test->getName(), "Default Orc");
        delete test;
        delete fact;}

TEST(Player_Factory_Tests, Standard_Damage){
	 CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Explorer Dan",0);
        EXPECT_EQ(test->getDamage(),24);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Standard_Protection){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Explorer Dan",0);
        EXPECT_EQ(test->getProtection(),6);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Standard_Health){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Explorer Dan",0);
        EXPECT_EQ(test->getMaxHP(),120);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Standard_Name){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Explorer Dan",0);
        EXPECT_EQ(test->getName(),"Explorer Dan");
        delete test;
        delete fact;}


TEST(Player_Factory_Tests, Sniper_Damage){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Ranger Rick",1);
        EXPECT_EQ(test->getDamage(),42);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Sniper_Protection){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Ranger Rick",1);
        EXPECT_EQ(test->getProtection(),2);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Sniper_Health){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Ranger Rick",1);
        EXPECT_EQ(test->getMaxHP(),80);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Sniper_Name){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Ranger Rick",1);
        EXPECT_EQ(test->getName(),"Ranger Rick");
        delete test;
        delete fact;}

TEST(Player_Factory_Tests,Tank_Damage){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Officer Steve",2);
        EXPECT_EQ(test->getDamage(),11);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Tank_Protection){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Officer Steve",2);
        EXPECT_EQ(test->getProtection(),8);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Tank_Health){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Officer Steve",2);
        EXPECT_EQ(test->getMaxHP(),160);
        delete test;
        delete fact;}

TEST(Player_Factory_Testing, Tank_Name){
         CharacterFactory* fact=new CharacterFactory();
        Player* test = fact->getPlayer("Officer Steve",2);
        EXPECT_EQ(test->getName(),"Officer Steve");
        delete test;
        delete fact;}


#endif
