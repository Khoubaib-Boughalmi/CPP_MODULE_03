#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap: public ClapTrap
{
    private:

    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        void attack(const std::string& target);
        void guardGate();
};

#endif