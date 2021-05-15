#ifndef __BOW_HPP__
#define __BOW_HPP__

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/GearFactory.hpp"

#include "/home/csmajs/mmans025/final-project-jsand155_atam032_mmans025/header/Weapon.hpp"



class Bow : public Weapon {
	private:
		string name;
	public:
		Bow() {
		 	name = "Bow";
		}

		std::string getName() {
			return name;
		 	
		}


}






#endif
