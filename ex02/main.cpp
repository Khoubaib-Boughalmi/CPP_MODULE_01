#include <iostream>

int main()
{
    std::string myStr = "HI THIS IS BRAIN";
    std::string *stringPTR = &myStr;
    std::string &stringREF = myStr;

    std::cout << &myStr << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << myStr << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}