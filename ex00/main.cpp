#include "Zombie.h"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *allalZombie;

    randomChump("hajib");

    allalZombie = newZombie("allal");
    allalZombie->announce();

    delete allalZombie;
    return (0);
}