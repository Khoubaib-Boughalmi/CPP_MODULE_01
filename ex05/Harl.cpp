#include "Harl.h"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout << "I really do" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money";
    std::cout << "You didn’t put enough bacon in my burger!";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std:: string level) {
    void (Harl::*ptrFun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            (this->*ptrFun[i])();
            break;
        }
    }    
}