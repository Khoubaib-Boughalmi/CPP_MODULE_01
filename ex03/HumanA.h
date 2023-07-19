#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string humanName, Weapon &weaponUsed);
        ~HumanA();
        void attack(void);
};


#endif