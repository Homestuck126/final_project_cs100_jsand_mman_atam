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
#endif
