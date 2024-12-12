#ifndef PATTERNREPLACE_H
# define PATTERNREPLACE_H
# include <fstream>
# include <string>

int             invalidArgsNum(int ac);
std::ifstream   *inFileOpen(std::string fileName);
std::ofstream   *outFileOpen(std::string fileName);
std::string     joinStr(std::string s1, std::string s2);
void            ioStreamsDel(std::ifstream *inFile, std::ofstream *outFile);
int             patternReplace(std::ifstream *inFile, std::ofstream *outFile, std::string s1, std::string s2);

#endif