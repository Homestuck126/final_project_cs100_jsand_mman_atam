#ifndef __COMBATTEST_HPP__
#define __COMBATTEST_HPP__
#include "../header/Combat.hpp"
#include "../header/Character.hpp"
#include "../header/CharacterFactory.hpp"
#include "gtest/gtest.h"

TEST(CombatTest, CheckEnemy) {

CharacterFactory *cf;

//Player *player = cf->getPlayer("mel",0);
//Character  *enemy = cf->getEnemy(0,0,1);

Combat * newCombat = new Combat(cf);

newCombat->startCombat();

}

#endif
