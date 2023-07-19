#include "HumanA.h"

HumanA::HumanA(std::string humanName, Weapon &weaponUsed): name(humanName), weapon(weaponUsed)
{
    std::cout << "HumanA " << name << " was created with weapon : " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA memory was deleted" << std::endl;

}

void HumanA::attack() 
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}