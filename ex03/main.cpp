#include "DiamondTrap.h"

int main()
{
    
    DiamondTrap diamondTrap("DiamondTrapNinja");
    diamondTrap.attack("Ninja Slayer");
    diamondTrap.takeDamage(5);
    diamondTrap.beRepaired(12);
    diamondTrap.takeDamage(77);
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();

    return (0);
}