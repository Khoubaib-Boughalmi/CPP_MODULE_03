#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();
        void attack(const std::string& target);
};

#endif