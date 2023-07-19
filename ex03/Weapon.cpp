#include "Weapon.h"

Weapon::Weapon(std::string weaponName)
{
    this->type = weaponName;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void)
{
    const std::string& typeRef = this->type;
    return (typeRef);
}

void Weapon::setType(std::string value)
{
    this->type = value;
}
