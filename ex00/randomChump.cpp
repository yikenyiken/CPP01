#include "Zombie.h"

void    randomChump(std::string name)
{
    Zombie localZombie(name);

    localZombie.announce();
}