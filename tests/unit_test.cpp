#include "gtest/gtest.h"
#include "ElfSetTest.hpp"
#include "OrcSetTest.hpp"


#include "Tile_test.hpp"
#include "Quest_test.cpp"
#include "QuestLog_test.hpp"
#include "character_tests.hpp"
#include "inventory_tests.hpp"


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
