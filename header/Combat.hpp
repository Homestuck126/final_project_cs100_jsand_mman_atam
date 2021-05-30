#ifndef __COMBAT_HPP__
#define __COMBAT_HPP__


#include "../header/Character.hpp"
#include "../header/CharacterFactory.hpp"
//#include ""


#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>


class Combat {

	private:
		//CombatMenu *coMenu;
		//
		//

		CharacterFactory *cF;

		Character *enemy;
		Player *player;


		bool playerWon;
		bool isDone;
		bool missed;
	public:
		Combat(CharacterFactory *c) {
			this->cF = c;
			this->enemy = cF->getEnemy(0,0,1);
			this->player = cF->getPlayer("mel",0);
			
			//this->player = p;

			isDone = false;
			missed = false;
			playerWon = false;
		}
		bool getDone() {return isDone;}
		bool startCombat() {
		
			setMissed();
			introLines();
		
			enemy->takeDamage(player->getDamage());
			playerLines();
			if(enemy->getCurHP() == 0) {
				playerWon = true;
				isDone = true;
			}
			else if(player->getCurHP() == 0) {
				playerWon = false;
				isDone = true;
			}
			
			//enemies turn
			player->takeDamage(enemy->getDamage());
			attackLines();
		}
		
		
		void setMissed() {
		
			
			int randNum = std::rand() % 100 + 1; 
			if(randNum > 60) {
				missed = true;
			}
			else {
				missed = false;
			}

		}
		//dialogue combat options
		void playerLines() {
			std::cout << "You hit it with " << player->getDamage() << std::endl;

		}
		void introLines() {
			std::cout << "A wild appeared" << std::endl;

		}
		void attackLines() {
		std::cout << enemy->getName() << " hit you with " << enemy->getDamage() << "damage!" << std::endl;

		}
		


};




#endif
