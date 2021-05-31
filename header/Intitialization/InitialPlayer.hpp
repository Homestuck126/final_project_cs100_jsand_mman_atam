#ifndef __INITIALPLAYER_HPP__

#define __INITIALPLAYER_HPP__
#include "../Character.hpp"
#include "../CharacterFactory.hpp"



class InitialPlayer {

public:
	void createPlayer(CharacterFactory* F, Player* p) {
        int input = 0;
        std::cout<<"What is your Name" <<std::endl;
        std::string name;
        std::cin>> name;
	while(input != 1 || input !=2 || input !=3){
        	std::cout<<"Enter the class you wish to be\n 1 - Homeless man\n2 - Ranger\n3 - Riot Raider" <<std::endl;
        	std::cin>>input;
        	switch(input){
                	case 1:
                		p = F->getPlayer(name , 0);
                 		break;
                	case 2:
                 		p = F->getPlayer(name , 1);
                		break;
                	case 3:
                 		p = F->getPlayer(name , 2);
                		break;
                	default:
                		std::cout<<"invalid input"<<std::endl;
				break;
		  	}
		}
	}

};


#endif
