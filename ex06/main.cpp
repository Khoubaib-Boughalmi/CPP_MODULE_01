#include "Harl.h"


int harlFilterSelector(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if(levels[i] == level)
            return (i);
    }
    return (-1);
}
void    harlFilterSwitch(std::string level)
{
    Harl harlTheCryBaby;
    switch (harlFilterSelector(level))
    {
    case 0:
        harlTheCryBaby.complain("DEBUG");
        harlTheCryBaby.complain("INFO");
        harlTheCryBaby.complain("WARNING");
        harlTheCryBaby.complain("ERROR");
        break;
    case 1:
        harlTheCryBaby.complain("INFO");
        harlTheCryBaby.complain("WARNING");
        harlTheCryBaby.complain("ERROR");
        break;    
    case 2:
        harlTheCryBaby.complain("WARNING");
        harlTheCryBaby.complain("ERROR");
        break;    
    case 3:
        harlTheCryBaby.complain("ERROR");
        break;    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]";
        break;
    }
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]";
        return (1);
    }
    harlFilterSwitch(std::string(argv[1]));
    return (0);
}