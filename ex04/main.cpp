#include <iostream>
#include <cstdlib>
#include "patternReplace.h"

int main(int ac, char **av)
{
    std::ifstream   *inFile;
    std::ofstream   *outFile;
    std::string      inFileName;
    std::string      outFileName;

    if (invalidArgsNum(ac))
        return (EXIT_FAILURE);

    inFileName = av[1];
    outFileName = inFileName + ".replace";

    inFile = inFileOpen(inFileName);
    if (!inFile)
        return (EXIT_FAILURE);

    outFile = outFileOpen(outFileName);
    if (!outFile)
    {
        ioFstreamsDel(inFile, outFile);
        return (EXIT_FAILURE);
    }

    if (patternReplace(inFile, outFile, av[2], av[3]))
	{
	    ioFstreamsDel(inFile, outFile);
        return (EXIT_FAILURE);
	}

    ioFstreamsDel(inFile, outFile);
    return (EXIT_SUCCESS);
}