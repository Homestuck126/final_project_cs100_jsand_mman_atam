#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__


class Armor {
        protected:
                double healthIncrease;
                double resistance;
                std::string name;
        public:
                virtual ~Armor() {};
                virtual std::string getName () const = 0;



};
#endif
