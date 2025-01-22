#include "Harl.hpp"
#include <iostream>
#define LEVELS 4

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << "\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << "\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n";
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << "\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\n";
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << "\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void    Harl::complain(std::string level)
{
    std::string levels[LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i;

    i = 0;
    while (i < LEVELS && levels[i] != level)
        i++;
    switch (i + 1)
    {
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
            break ;
        case 1:
            debug();
        case 2:
            info();
        case 3:
            warning();
        case 4:
            error();
    }
}