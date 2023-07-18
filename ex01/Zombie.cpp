#include "Zombie.h"

Zombie::Zombie()
{
    this->name = "undefined";
    std::cout << this->name << " created" << std::endl;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}