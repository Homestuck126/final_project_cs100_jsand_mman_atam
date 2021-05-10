#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_

class Character {
    public:
    Character() {   //Default Constructor
        dmg=0;      //All values default to 0 if not provided
        maxHP=curHP=0;
        curXP=0;
        lvl=0;
    };
    Character(int d, int h, int l){ //Non-Default Constructor
        dmg = d;
        maxHP = curHP = h;
        curXP = 0;
        lvl = l;
    }; 
    ~Character();   //Destructor
    int getExp(){    //Getter funtion for experience
        return curXP;
    };  
    protected:
    int dmg;    //Base Damage Stat
    int maxHP;  //Maximum Health Stat
    int curHP;  //Current Health Amount
    int curXP;  //Current Experience Amount
    int lvl;    //Current Level
};
#endif