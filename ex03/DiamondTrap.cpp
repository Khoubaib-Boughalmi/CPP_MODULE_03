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

DiamondTrap::DiamondTrap(std::string passedName): ClapTrap(passedName + "_clap_name")
{
    std::cout << "DiamondTrap Named Constructor Called" << std::endl;
    this->Name = passedName + "_clap_name";
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    this->HitPoint = FragTrap::HitPoint;

}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Deconstructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other), FragTrap(other), ScavTrap(other) {
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
