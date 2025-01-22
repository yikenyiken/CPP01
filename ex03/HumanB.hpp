#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

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