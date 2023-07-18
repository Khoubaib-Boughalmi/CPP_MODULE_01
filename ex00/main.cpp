#include "Zombie.h"

void randomChump( std::string name);
Zombie* newZombie(std::string name);

int main()
{
    Zombie *heapZombie = newZombie("JAVA");
    heapZombie->announce();
    randomChump("PYTHON");
    delete(heapZombie);
    return (0);
}