#include <fstream>
#include <iostream>

int istreamEof(std::ifstream *inFile)
{
    if (inFile->eof())
        return (1);

    std::cerr << "incompleted process: input stream failed" << std::endl;
    return (0);
}

std::string replaceOcc(std::string line, std::string s1, std::string s2)
{
    size_t      occ;
    std::string beforeOcc;
    std::string postOcc;

    occ = line.find(s1);
    if (s1.empty() || occ == std::string::npos)
        return (line);

    postOcc = line.substr(occ + s1.length());
    beforeOcc = line.substr(0, occ);
    beforeOcc += s2;
    return (beforeOcc + replaceOcc(postOcc, s1, s2));
}

int patternReplace(std::ifstream *inFile, std::ofstream *outFile,
            std::string s1, std::string s2)
{
    std::string line;

    std::getline(*inFile, line);
    line = replaceOcc(line, s1, s2);
    *outFile << line;

    while (std::getline(*inFile, line))
    {
        *outFile << std::endl;
        line = replaceOcc(line, s1, s2);
        *outFile << line;
    }

    if (!istreamEof(inFile))
        return (1);

    return (0);
}