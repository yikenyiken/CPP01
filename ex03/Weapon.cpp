#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type) {};

const std::string   &Weapon::getType(void)
{
	const std::string	&typeRef = this->type;
	return (typeRef);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}