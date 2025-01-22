#ifndef PATTERNREPLACE_HPP
# define PATTERNREPLACE_HPP
# include <fstream>
# include <string>

int             isInvalidArgsNum(int ac);
std::ifstream   *inFileOpen(std::string fileName);
std::ofstream   *outFileOpen(std::string fileName);
void            ioFstreamsDel(std::ifstream *inFile, std::ofstream *outFile);
int             patternReplace(std::ifstream *inFile, std::ofstream *outFile, std::string s1, std::string s2);

#endif