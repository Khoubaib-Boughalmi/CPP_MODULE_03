#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.h"

class FragTrap: virtual public ClapTrap
{
    private:

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        void attack(const std::string& target);
        void highFivesGuys();

};

#endif