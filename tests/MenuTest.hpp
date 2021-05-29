#ifndef __MENUTEST_HPP__
#define __MENUTEST_HPP__

#include "gtest/gtest.h"

#include "../header/Menu.hpp"



TEST(MenuTest, CheckInput1) {

	Menu *mapMenu = new MapMenu();
	mapMenu->setChoice('1');
	
	EXPECT_EQ(mapMenu->getChoice(), '1');


}

TEST(MenuTest, CheckInput2) {

	Menu *mapMenu = new MapMenu();
	mapMenu->setChoice('2');

	EXPECT_EQ(mapMenu->getChoice(), '2');

}
TEST(MenuTest, CheckInput3) {

        Menu *mapMenu = new MapMenu();
        mapMenu->setChoice('3');

        EXPECT_EQ(mapMenu->getChoice(), '3');

}
TEST(MenuTest, CheckInput4) {

        Menu *mapMenu = new MapMenu();
        mapMenu->setChoice('4');

        EXPECT_EQ(mapMenu->getChoice(), '4');

}


#endif
