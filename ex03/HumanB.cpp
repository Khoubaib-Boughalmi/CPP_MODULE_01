#include "HumanB.h"

HumanB::HumanB(std::string humanName): name(humanName)
{
    std::cout << "HumanB " << name << " was created with no weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB memory was deleted" << std::endl;

}

void HumanB::attack() 
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weaponName) 
{
    this->weapon = &weaponName;
}