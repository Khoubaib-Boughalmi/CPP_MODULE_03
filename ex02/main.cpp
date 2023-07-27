#include "ScavTrap.h"

int main()
{
    ScavTrap scavTrap("ScavTrapNinja");
    scavTrap.attack("Ninja Slayer");
    scavTrap.takeDamage(5);
    scavTrap.beRepaired(12);
    scavTrap.takeDamage(77);
    scavTrap.guardGate();
    return (0);
}