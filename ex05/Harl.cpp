#include "Harl.h"
#include <iostream>

void    Harl::debug(void)
{
    std::cout << "Not a single threat to the base so far..." << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Detecting threats to the base becomes a priority in times of war" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "An unidentified flying object is moving towards the base" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "The base is under heavy attack! defensive actions must be taken" << std::endl;
}

void    Harl::complain(std::string level)
{
    void                (Harl::*functionPtr)(void) = NULL;
    const std::string   levels[LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void                (Harl::*functionPtrsArray[LEVELS])(void)
                            = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < LEVELS; i++)
    {
        if (levels[i] == level)
            functionPtr = functionPtrsArray[i];
    }

    if (!functionPtr)
    {
        std::cerr << "probably complaining about insignificant problems" << std::endl;
        return;
    }

    (this->*functionPtr)();
}