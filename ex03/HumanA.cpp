#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
	this->name = name;
};

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}