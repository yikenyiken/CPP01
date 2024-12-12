#include "Harl.h"
#include <iostream>

int main(int argc, char **argv)
{
    Harl        harl;
    std::string level;

    if (argc != 2)
    {
        std::cerr << "Wrong argument number" << std::endl;
        return (1);
    }

    level = argv[1];

    harl.complain(level);

    return (0);
}