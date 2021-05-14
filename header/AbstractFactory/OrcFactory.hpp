#ifndef __ORCFACTORY_HPP__
#define __ORCFACTORY_HPP__

class OrcFactory(): public GearFactory {

        public:
                Weapon* createWeapon() {
                        return new Axe();
                }

                Armor * createArmor() {
                        return new HeavyArmor();
                }

};

#endif
