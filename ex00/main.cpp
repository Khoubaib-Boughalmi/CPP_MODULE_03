#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapy("ClapyNinja");
    clapy.attack("Ninja Slayer");
    clapy.takeDamage(5);
    clapy.beRepaired(12);
    clapy.takeDamage(77);
    return (0);
}