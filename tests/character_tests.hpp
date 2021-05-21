#ifndef __CHARACTER_TEST_HPP_
#define __CHARACTER_TEST_HPP_

#include "gtest/gtest.h"

#include "../header/Character.hpp"
#include "../header/AbstractFactory/Weapon.hpp"
#include "../header/AbstractFactory/Armor.hpp"

TEST(Character_Getter_Tests, Level_0_Damage){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getDamage(),57);}

TEST(Character_Getter_Tests, Level_0_Protection){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getProtection(),15);}

TEST(Character_Getter_Tests, Level_0_MaxHealth){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getMaxHP(),200);}

TEST(Character_Getter_Tests, Level_0_CurHealth){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getCurHP(),200);}

TEST(Character_Getter_Tests, Level_0_Experience){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getExperience(),10);}

TEST(Character_Getter_Tests, Level_0_Level){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    EXPECT_EQ(test->getLevel(),0);}

TEST(Character_Getter_Tests, Level_10_Damage){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    EXPECT_EQ(test->getDamage(),90);}

TEST(Character_Getter_Tests, Level_10_Protection){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    EXPECT_EQ(test->getProtection(),10);}

TEST(Character_Getter_Tests, Level_10_MaxHealth){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    EXPECT_EQ(test->getMaxHP(),250);}

TEST(Character_Getter_Tests, Level_10_CurHealth){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    EXPECT_EQ(test->getCurHP(),250);}

TEST(Character_Getter_Tests, Level_10_Experience){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    EXPECT_EQ(test->getExperience(),110);}

TEST(Character_Getter_Tests, Level_10_Level){
    Weapon* wpn = new Bow ();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn, arm, 50, 200, 10);
    EXPECT_EQ(test->getLevel(),10);}



TEST(Character_Damage_Tests, Take_Damage_Light){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    test->takeDamage(30);
    EXPECT_EQ(test->getCurHP(),230);}

TEST(Character_Damage_Tests, Take_Damage_Medium){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    test->takeDamage(70);
    EXPECT_EQ(test->getCurHP(),195);}

TEST(Character_Damage_Tests, Take_Damage_Heavy){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    test->takeDamage(150);
    EXPECT_EQ(test->getCurHP(),110);}

TEST(Character_Damage_Tests, Take_Damage_Excessive){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,10);
    test->takeDamage(500);
    EXPECT_EQ(test->getCurHP(),0);}








#endif
