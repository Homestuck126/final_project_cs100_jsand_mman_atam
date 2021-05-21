#include "gtest/gtest.h"
#include "ElfSetTest.hpp"
#include "OrcSetTest.hpp"

#include "character_tests.hpp"
//#include "inventory_tests.hpp"

//#include "Tile_test.hpp"
//#include "QuestLog_test.hpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
