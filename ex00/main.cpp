#include "Zombie.hpp"
#include <iostream>
#define ZOMBIE1 "zombie1"
#define ZOMBIE2 "zombie2"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *zombie;

    randomChump(ZOMBIE1);

    zombie = newZombie(ZOMBIE2);
	if (!zombie)
	{
		std::cerr << "failed to allocate " << ZOMBIE2 << "\n";
		return (1);
	}
    zombie->announce();

    delete zombie;
    return (0);
}