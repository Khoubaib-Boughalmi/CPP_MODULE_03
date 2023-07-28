#include "ClapTrap.h"

int main()
{
    ClapTrap clapy("ClapyNinja");
    clapy.attack("Ninja Slayer");
    clapy.attack("Ninja Slayer");
    clapy.takeDamage(5);
    clapy.beRepaired(12);
    clapy.beRepaired(12);
    clapy.takeDamage(1);
    clapy.attack("Ninja Slayer");
    return (0);
}