#ifndef __ELFSETTEST_HPP__
#define __ELFSETTEST_HPP__



#include "gtest/gtest.h"
#include "../header/AbstractFactory/GearFactory.hpp"
#include "../header/AbstractFactory/ElfFactory.hpp"





TEST(ElfGearCreation, CheckWeaponName)  {

	GearFactory *gearByClass;
	gearByClass = new ElfFactory();

	Weapon *firstWeapon = gearByClass->createWeapon();	
	EXPECT_EQ(firstWeapon->getName(), "Bow");
}

TEST(ElfGearCreation, CheckArmorName) {

	GearFactory *gearByClass;
	gearByClass = new ElfFactory();

	Armor *firstArmor = gearByClass->createArmor();

	EXPECT_EQ(firstArmor->getName(), "LightArmor");


}

TEST(ElfGearCreation, CheckWeaponStat) {

	GearFactory *gearByClass;
	gearByClass = new ElfFactory();
	
	Weapon *firstWeapon = gearByClass->createWeapon();

	EXPECT_EQ(firstWeapon->getAttackDmg(), 10);

}

TEST(ElfGearCreation, CheckArmorStat) {

        GearFactory *gearByClass;
        gearByClass = new ElfFactory();

        Armor *firstArmor = gearByClass->createArmor();

        EXPECT_EQ(firstArmor->getHealth(), 10);




}



#endif
