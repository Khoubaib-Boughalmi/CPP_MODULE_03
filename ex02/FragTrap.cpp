#include "FragTrap.h"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Name = "unamed";
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string passedName): ClapTrap(passedName)
{
    std::cout << "FragTrap Named Constructor Called" << std::endl;
    this->Name = passedName;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
    std::cout << "FragTrap Copy Construct Called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap Copy assignment operator Called" << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->HitPoint = other.HitPoint;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
    }
    return (*this);
}

void FragTrap::attack(const std::string& target) {
    if (this->EnergyPoint > 0 && this->HitPoint > 0 )
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage<<" points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if(this->EnergyPoint == 0)
        std::cout << "FragTrap " << this->Name << " cannot attacks " << target << " no Energy points are left!" << std::endl;
    else if(this->HitPoint == 0)
        std::cout << "FragTrap " << this->Name << " cannot attacks " << target << " no Hit points are left!" << std::endl;
}

void FragTrap::highFivesGuys() {
        std::cout << "FragTrap " << this->Name << " is now High fiving guys"<< std::endl;
}
