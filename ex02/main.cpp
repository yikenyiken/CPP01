#include <string>
#include <iostream>

int main(void)
{
    std::string greeting;
    std::string &stringREF = greeting;
    std::string *stringPTR;

    stringPTR = &greeting;
    greeting = "HI THIS IS BRAIN";

    std::cout << "String memory address: " << &greeting << std::endl;
    std::cout << "Pointer memory address: " << stringPTR << std::endl;
    std::cout << "Reference memory address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "String value: " << greeting << std::endl;
    std::cout << "Pointer value: " << *stringPTR << std::endl;
    std::cout << "Reference value: " << stringREF << std::endl;

    return (0);
}