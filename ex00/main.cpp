#include "Zombie.h"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *zombie;

    randomChump("zombie1");

    zombie = newZombie("zombie2");
    zombie->announce();

    delete zombie;
    return (0);
}