#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->Name = "unamed";
	this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string passedName): ClapTrap(passedName + "_clap_name"), ScavTrap(passedName), FragTrap(passedName)
{
    ClapTrap::Name = ClapTrap::Name + "_clap_name";
    this->Name = passedName;
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap " << this->Name << " Named Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " Deconstructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other.Name + "_clap_name"), ScavTrap(other), FragTrap(other) {
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
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "This is DiamondTrap a child of " << ScavTrap::Name << " and " << FragTrap::Name << " and a grandChild of " << ClapTrap::Name << std::endl;
}
