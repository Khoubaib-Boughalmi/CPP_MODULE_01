#include "Zombie.h"

void randomChump( std::string name )
{
    Zombie randomChumpZombie = Zombie(name);
    randomChumpZombie.announce();
}