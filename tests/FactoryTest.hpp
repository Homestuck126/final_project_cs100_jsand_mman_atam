#ifndef __FACTORYTEST_HPP__
#define __FACTORYTEST_HPP__



#include "gtest/gtest.h"
#include "../header/GearFactory.hpp"
#include "../header/AbstractFactory/ElfFactory.hpp"





TEST(ElfGearCreation, CheckName)  {

	GearFactory *gearByClass;
	gearByClass = new ElfFactory();

	Weapon *firstWeapon = gearByClass->createWeapon();
	Armor *firstArmor = gearByClass->createArmor();

	
	EXPECT_EQ{firstWeapon->getName(), "Bow";}
}



#endif
