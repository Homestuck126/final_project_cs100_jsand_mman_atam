#ifndef __FACTORYTEST_HPP__
#define __FACTORYTEST_HPP__



#include "gtest/gtest.h"
#include "GearFactory.hpp"

TEST(ElfGearCreation, CheckName)  {

	GearFactory *gearByClass;
	gearByClass = new ElfGearFactory();

	Weapon *firstWeapon = gearByClass->createWeapon();
	Armor *firstArmor = gearByClass->createArmor();

	
	EXPECT_EQ{firstWeapon->getName(), "Bow";}
}



#endif
