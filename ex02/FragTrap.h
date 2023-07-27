#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.h"

class FragTrap: public ClapTrap
{
    private:

    public:
        FragTrap(/* args */);
        virtual ~FragTrap();
        FragTrap(std::string);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        void attack(const std::string& target);
        void guardGate();

};

#endif