#include "Harl.hpp"
#include <iostream>
#define LEVELS 4

void    Harl::debug(void)
{
    std::cout << "Not a single threat to the base so far..." << "\n";
}

void    Harl::info(void)
{
    std::cout << "Detecting threats to the base becomes a priority in times of war" << "\n";
}

void    Harl::warning(void)
{
    std::cout << "An unidentified flying object is moving towards the base" << "\n";
}

void    Harl::error(void)
{
    std::cout << "The base is under heavy attack! defensive actions must be taken" << "\n";
}

void    Harl::complain(std::string level)
{
    void              	(Harl::*functionPtr)(void) = NULL;
    const std::string	levels[LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void                (Harl::*functionPtrsArray[LEVELS])(void)
                            = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < LEVELS; i++)
    {
        if (levels[i] == level)
            functionPtr = functionPtrsArray[i];
    }

    if (!functionPtr)
    {
        std::cerr << "probably complaining about insignificant problems" << "\n";
        return;
    }

    (this->*functionPtr)();
}