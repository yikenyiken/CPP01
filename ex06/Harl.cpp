#include "Harl.h"
#include <iostream>

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        case 1:
            this->debug();
        case 2:
            this->info();
        case 3:
            this->warning();
        case 4:
            this->error();
    }
}