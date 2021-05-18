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

TEST(OrcSet, CheckWeaponStat) {

	GearFactory *gearByClass;
	gearByClass = new OrcFactory();

	Weapon *orcWeapon = gearByClass->createWeapon();
	EXPECT_EQ(orcWeapon->getAttackDmg(), 7);
}

TEST(OrcSet, CheckArmorStat) {

        GearFactory *gearByClass;
        gearByClass = new OrcFactory();

        Armor * newArmor  = gearByClass->createArmor();
        EXPECT_EQ(newArmor->getHealth(), 15);


}


#endif
