#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include <string>

class Armor {
        protected:
               
              
                std::string name;
		int healthInc;
        public:
                virtual ~Armor() {};
                virtual std::string getName () const = 0;
		virtual int getHealth () const = 0;



};

class LightArmor : public Armor {
	
	private:
		std::string name;
		int healthInc;
	public:
		LightArmor() {
			this->name = "LightArmor";
			this->healthInc = 10;
		}
		std::string getName() const override {return name;}
		int getHealth() const override {return healthInc;}
};

class HeavyArmor : public Armor {
	private:
		std::string name;
		int healthInc;
        public:
		HeavyArmor() {this->name = "HeavyArmor";
			      this->healthInc = 15;}
                std::string getName() const override {return name;}
		int getHealth() const override {return healthInc;}

};
#endif
