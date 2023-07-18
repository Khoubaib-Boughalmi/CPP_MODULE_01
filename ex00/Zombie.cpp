#include "Zombie.h"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie " << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " destroyed" << std::endl;

}

void Zombie::announce() {
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
