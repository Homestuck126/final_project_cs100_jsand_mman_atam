#ifndef __CHARACTER_TEST_HPP_
#define __CHARACTER_TEST_HPP_

#include "gtest/gtest.h"

#include "../header/Character.hpp"
#include "../header/AbstractFactory/Weapon.hpp"
#include "../header/AbstractFactory/Armor.hpp"

TEST(Character_Getter_Tests, CharacterDamage){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    EXPECT_EQ(test->getDamage(),57);
    delete test;
}

TEST(Character_Getter_Tests, CharacterProtection){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    EXPECT_EQ(test->getProtection(),15);
    delete test;
}

TEST(Character_Getter_Tests, CharacterMaxHealth){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    EXPECT_EQ(test->getMaxHP(),200);
    delete test;
}

TEST(Character_Getter_Tests, CharacterCurHealth){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    EXPECT_EQ(test->getCurHP(),200);
    delete test;
}

TEST(Character_Getter_Tests, CharacterExperience){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,10);
    EXPECT_EQ(test->getExperience(),10);
    delete test;
}

TEST(Character_Damage_Tests, Take_Damage_Light){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    test->takeDamage(30);
    EXPECT_EQ(test->getCurHP(),180);
    delete test;
}

TEST(Character_Damage_Tests, Take_Damage_Medium){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    test->takeDamage(70);
    EXPECT_EQ(test->getCurHP(),145);
    delete test;
}

TEST(Character_Damage_Tests, Take_Damage_Heavy){
    Weapon* wpn = new Bow();
    Armor* arm = new LightArmor();
    Character* test = new Character("",wpn,arm,50,200,0);
    test->takeDamage(150);
    EXPECT_EQ(test->getCurHP(),60);
    delete test;
}

TEST(Character_Damage_Tests, Take_Damage_Excessive){
    Weapon* wpn = new Axe();
    Armor* arm = new HeavyArmor();
    Character* test = new Character(wpn,arm,50,200,0);
    test->takeDamage(500);
    EXPECT_EQ(test->getCurHP(),0);
    delete test;
}

TEST(Character_Name_Tests, No_Name){
    Character* test = new Character(new Bow(), new HeavyArmor(), 20, 100, 1);
    EXPECT_EQ(test->getName(),"");
    delete test;
}

TEST(Character_Name_Tests, Set_Name){
    Character* test = new Character(new Bow(), new HeavyArmor(), 20, 100, 1);
    test->setName("Roger Dodger");
    EXPECT_EQ(test->getName(),"Roger Dodger");
    delete test;
}

TEST(Character_Name_Tests, Construct_with_Name){
    Character* test = new Character("Steve Rogers",new Bow(), new HeavyArmor(), 20, 100, 1);
    EXPECT_EQ(test->getName(),"Steve Rogers");
    delete test;
}
#endif
