#include <iostream>
#include <fstream>

int isInvalidArgsNum(int ac)
{
    if (ac != 4)
    {
        std::cerr << "Usage: */patternReplace <filename> s1 s2" << std::endl;
        return (1);
    }

    return (0);
}

std::ifstream   *inFileOpen(std::string fileName)
{
    std::ifstream   *inFile;

    inFile = new (std::nothrow) std::ifstream(fileName.c_str());
    if (!inFile || !inFile->is_open())
    {
        delete inFile;
        std::cerr << "Failed to open " << fileName << " for reading" << std::endl;
        return (NULL);
    }

    return (inFile);
}

std::ofstream   *outFileOpen(std::string fileName)
{
    std::ofstream   *outFile;

    outFile = new (std::nothrow) std::ofstream(fileName.c_str());
    if (!outFile || !outFile->is_open())
    {
        delete outFile;
        std::cerr << "Failed to open " << fileName << " for writing" << std::endl;
        return (NULL);
    }

    return (outFile);
}

void    ioFstreamsDel(std::ifstream *inFile, std::ofstream *outFile)
{
    delete inFile;
    delete outFile;
}