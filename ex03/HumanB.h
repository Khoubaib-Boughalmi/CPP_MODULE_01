#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string humanName);
        HumanB(std::string humanName, Weapon &weaponUsed);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &weaponName);
};


#endif