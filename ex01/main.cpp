#include "Zombie.h"

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    int     hordeSize;
    Zombie  *myHorde;

    hordeSize = 05;
    myHorde = zombieHorde(hordeSize, "laila");
    for (int i = 0; i < hordeSize; i++)
        myHorde[i].announce();

    delete[] myHorde;
}