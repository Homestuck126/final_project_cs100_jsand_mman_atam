#ifndef __ORCSETTEST_HPP__
#define __ORCSETTEST_HPP__

#include "gtest/gtest.h"
#include "../header/GearFactory.hpp"
#include "../header/AbstractFactory/OrcFactory.hpp"

TEST(OrcSet, CheckWeaponName) {

	GearFactory * gearByClass;
	gearByClass = new OrcFactory();
	
	Weapon *orcWeapon = gearByClass->createWeapon();
	EXPECT_EQ(orcWeapon->getName(), "Axe");



}

TEST(OrcSet, CheckArmorName) {
	GearFactory *gearByClass;
	gearByClass = new OrcFactory();
	
	Armor* orcArmor = gearByClass->createArmor();
	EXPECT_EQ(orcArmor->getName(), "HeavyArmor");


}


#endif
