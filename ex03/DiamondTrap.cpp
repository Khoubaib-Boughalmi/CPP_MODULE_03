#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): ClapTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->Name = "unamed";
	this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    this->HitPoint = FragTrap::HitPoint;
}

DiamondTrap::DiamondTrap(std::string passedName): ClapTrap(passedName)
{
    std::cout << "DiamondTrap Named Constructor Called" << std::endl;
    this->Name = passedName;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other) {
    std::cout << "DiamondTrap Copy Construct Called" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "DiamondTrap Copy assignment operator Called" << std::endl;
    if(this != &other)
    {
        this->Name = other.Name;
        this->HitPoint = other.HitPoint;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target) {
    if (this->EnergyPoint > 0 && this->HitPoint > 0 )
    {
        std::cout << "DiamondTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage<<" points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if(this->EnergyPoint == 0)
        std::cout << "DiamondTrap " << this->Name << " cannot attacks " << target << " no Energy points are left!" << std::endl;
    else if(this->HitPoint == 0)
        std::cout << "DiamondTrap " << this->Name << " cannot attacks " << target << " no Hit points are left!" << std::endl;
}
