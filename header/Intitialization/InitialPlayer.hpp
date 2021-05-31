#ifndef __INITIALPLAYER_HPP__

#define __INITIALPLAYER_HPP__
#include "../Character.hpp"
#include "../CharacterFactory.hpp"



class InitialPlayer {

public:
	Player* createPlayer(CharacterFactory* F) {
        int input = 0;
	bool done = 0;
        std::cout<<"What is your Name" <<std::endl;
        std::string name;
        std::cin.ignore();
	std::getline(std::cin,name);
	std::cout << "=========================================\n";
	while(!done){
        	std::cout<<"Enter the class you wish to be\n"
			<<"1 - Homeless man\n       -Medium Armor\n       -Medium Damage\n       -Medium Health\n"
			<<"2 - Ranger\n       -Light Armor\n       -High Damage\n       -Low Health\n"
			<<"3 - Riot Raider\n       -Heavy Armor\n       -Low Damage\n       -High Health\n" <<std::endl;
        	std::cin>>input;
        	switch(input){
                	case 1:
                		return F->getPlayer(name , 0);
	          		break;
                	case 2:
                 		return F->getPlayer(name , 1);
				break;
                	case 3:
                 		return F->getPlayer(name , 2);
				break;
                	default:
                		std::cout<<"invalid input"<<std::endl;
				break;
		  	}
		}
	std::cout << "=========================================\n";
	}

};


#endif
