#include "Zombie.hpp"
#include <iostream>
#define HORDESIZE 5

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie  *myHorde;

    myHorde = zombieHorde(HORDESIZE, "foo");
	if (!myHorde)
	{
		std::cerr << "failed to allocate a zombie horde" << "\n";
		return (1);
	}

    for (int i = 0; i < HORDESIZE; i++)
        myHorde[i].announce();

    delete[] myHorde;
	return (0);
}