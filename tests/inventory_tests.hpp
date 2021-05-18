#ifndef __INVENTORY_TEST_HPP_
#define __INVENTORY_TEST_HPP_

#include "gtest/gtest.h"

#include "../header/Inventory.hpp"


TEST(Inventory_Tests, Constructor_1_Health){
    Weapon* wpn = new Weapon();
    Armor* arm = new Armor();
    Inventory* test = new Inventory(wpn,arm);
    EXPECT_EQ(test->getHealing(),0);}

TEST(Inventory_Tests, Constructor_2_Health){
    Weapon* wpn = new Weapon();
    Armor* arm = new Armor();
    Inventory* test = new Inventory(wpn,arm,5);
    EXPECT_EQ(test->getHealing(),5);}

TEST(Inventory_Tests,_WeaponVal){
    Weapon* wpn = new Weapon();
    Armor* arm = new Armor();
    Inventory* test = new Inventory(wpn,arm);
    EXPECT_EQ(test->getWeaponVal(),100);}

TEST(Inventory_Tests,ArmorVal){
    Weapon* wpn = new Weapon();
    Armor* arm = new Armor();
    Inventory* test = new Inventory(wpn,arm);
    EXPECT_EQ(test->getArmorVal(),15);}

TEST(Inventory_Tests, Changed_Health){
    Weapon* wpn = new Weapon();
    Armor* arm = new Armor();
    Inventory* test = new Inventory(wpn,arm);
    test->changeHealing(20);
    EXPECT_EQ(test->getHealing(),20);}

#endif
