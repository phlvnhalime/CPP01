#include <iostream>
#include <string>


int main()
{
    std::string string;
    std::string *stringPTR;
    

    string =  "HI THIS IS BRAIN";
    stringPTR = &string;
    std::string &stringREF = *stringPTR;

    std::cout << "String memory adress: " << &string << std::endl;
    std::cout << "StringPTR memory adress: " << stringPTR << std::endl;
    std::cout << "StringREF memory adress: " << &stringREF << std::endl;

    std::cout << "-------------------------" << std::endl;
    std::cout << "The value of the string variable: " << string << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}