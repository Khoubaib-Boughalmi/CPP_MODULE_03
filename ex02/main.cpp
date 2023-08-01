#include "FragTrap.h"

int main()
{
    
    FragTrap fragTrap("FragTrapNinja");
    FragTrap littleFrag(fragTrap);
    littleFrag.attack("his father");
    fragTrap.attack("Ninja Slayer");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(12);
    fragTrap.takeDamage(77);
    fragTrap.takeDamage(42);
    fragTrap.highFivesGuys();

    return (0);
}