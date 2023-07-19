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
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &weaponName);
};


#endif