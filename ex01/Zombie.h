#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>


class Zombie {
    public :
        Zombie();
        ~Zombie();
        void    announce(void);
        void    setName(std::string name);
    private:
        std::string name; 
};
#endif