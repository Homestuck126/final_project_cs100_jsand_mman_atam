#ifndef __INITIALPLAYER_HPP__

#define __INITIALPLAYER_HPP__
#include "../Character.hpp"
#include "../CharacterFactory.hpp"



class InitialPlayer {

private:
	Player *newPlayer;
	CharacterFactory *playF;
public:
	InitialPlayer(CharacterFactory * makePlayer, Player *player ) {
	 newPlayer = player;
	 playF = makePlayer;

	}

	Player* createPlayer() {
        int input = 0;
        std::cout<<"What is your Name" <<std::endl;
        std::string name;
        std::cin>> name;
        std::cout<<"Enter the class you wish to be\n 1 - Homeless man\n2 - Ranger\n3 - Riot Raider" <<std::endl;
        std::cin>>input;
        switch(input)
         {
                case 1:
                 return newPlayer = playF->getPlayer(name , 0);
                 break;
                case 2:
                return newPlayer = playF->getPlayer(name , 1);
                break;
                case 3:
                return newPlayer = playF->getPlayer(name , 2);
                break;
                default:
                std::cout<<"invalid input"<<std::endl;
		  }
		  return nullptr;
		}


	~InitialPlayer() {delete newPlayer; delete playF;}

};


#endif
