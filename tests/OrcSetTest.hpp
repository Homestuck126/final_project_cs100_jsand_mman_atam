#ifndef __ORCSETTEST_HPP__
#define __ORCSETTEST_HPP__

#include "gtest/gtest.h"
#include "../header/AbstractFactory/GearFactory.hpp"


TEST(OrcSet, CheckWeaponName) {

	GearFactory * gearByClass;
	gearByClass = new OrcFactory();
	
	Weapon *orcWeapon = gearByClass->createWeapon(1);
	EXPECT_EQ(orcWeapon->getName(), "Axe");



}

TEST(OrcSet, CheckArmorName) {
	GearFactory *gearByClass;
	gearByClass = new OrcFactory();
	
	Armor* orcArmor = gearByClass->createArmor(1);
	EXPECT_EQ(orcArmor->getName(), "HeavyArmor");


}

TEST(OrcSet, CheckWeaponStat) {

	GearFactory *gearByClass;
	gearByClass = new OrcFactory();

	Weapon *orcWeapon = gearByClass->createWeapon(1);
	EXPECT_EQ(orcWeapon->getAttackDmg(), 7);
}

TEST(OrcSet, CheckArmorStat) {

        GearFactory *gearByClass;
        gearByClass = new OrcFactory();

        Armor * newArmor  = gearByClass->createArmor(1);
        EXPECT_EQ(newArmor->getProt(), 15);


}


#endif
