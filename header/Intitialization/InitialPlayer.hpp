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
    Player* newplayer;
        char input = ' ';
        std::string name;
        start:
        std::cout<<"What is your Name" <<std::endl;
        std::cin>> name;
        std::cout<<"Enter who you were before the recruitement\n1 - You were a homeless hobo, your possessions numbered the old gun your pal gave you before he passed and the tattered rags you wear. You can cause some havoc with the gun you own, but, your unhealthy life before and tattered armor does not make you very tough."<<std::endl;
        std::cout<<"2 - You were a space ranger, you were disgraced from your position after crashing your ship on a planet. Now all you've got is your trusty las rifle, and the reflective jacket you wore. You're a pretty balanced character."<<std::endl; 
        std::cout<<"3 - You were a Riot officer on one of the core worlds, you've been reassigned by your commander to the planetary exploration Bureau. A demotion for sure, but they allowed you to keep your armored suit and your shock baton. You might not be able to move very well or hit very hard, but your armor protects you against the strongest of hits." <<std::endl;
        std::cin>>input;
        switch(input)
         {
                case '1':
                newPlayer = playF->getPlayer(name , 0);
                 break;
                case '2':
                newPlayer = playF->getPlayer(name , 1);
                break;
                case '3':
                newPlayer = playF->getPlayer(name , 2);
                break;
                default:
                {
                std::cout<<"invalid input"<<std::endl;
                goto start;
                break;
                }
		     }
      std::cout<<"input c to confirm"<<std::endl;
      std::cin>>input;
      if(input == 'c')
      return newPlayer;
      else
      {
      delete newPlayer;
      goto start;
      }

		  return nullptr;
		}


	~InitialPlayer() {delete newPlayer; delete playF;}

};


#endif
