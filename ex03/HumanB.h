#ifndef HUMANB_H
# define HUMANB_H
# include <string>
# include "Weapon.h"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        void        setWeapon(Weapon &weapon);
        void        attack(void);
        HumanB(std::string name);
};

#endif