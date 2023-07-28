#include "ScavTrap.h"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    this->Name = "unamed";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string passedName): ClapTrap(passedName)
{
    std::cout << "ScavTrap Named Constructor Called" << std::endl;
    this->Name = passedName;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other) {
    std::cout << "ScavTrap Copy Construct Called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment operator Called" << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->HitPoint = other.HitPoint;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (this->EnergyPoint > 0 && this->HitPoint > 0 )
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage<<" points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if(this->EnergyPoint == 0)
        std::cout << "ScavTrap " << this->Name << " cannot attacks " << target << " no Energy points are left!" << std::endl;
    else if(this->HitPoint == 0)
        std::cout << "ScavTrap " << this->Name << " cannot attacks " << target << " no Hit points are left!" << std::endl;
}

void ScavTrap::guardGate() {
        std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode"<< std::endl;
}
