#include "FragTrap.h"

int main()
{
    FragTrap fragTrap("FragTrapNinja");
    fragTrap.attack("Ninja Slayer");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(12);
    fragTrap.takeDamage(77);
    fragTrap.highFivesGuys();
    return (0);
}