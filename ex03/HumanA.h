#ifndef HUMANA_H
# define HUMANA_H
# include <string>
# include "Weapon.h"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
    public:
        void        attack(void);
        HumanA(std::string name, Weapon &weapon);
};

#endif