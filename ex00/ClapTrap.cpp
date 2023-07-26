#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(std::string passedName): Name(passedName), HitPoint(10), \
                                            EnergyPoint(10), AttackDamage(10) 
{
    std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoint = other.EnergyPoint;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if(this != &other)
    {
        this->Name = other.Name;
        this->HitPoint = other.HitPoint;
        this->AttackDamage = other.AttackDamage;
        this->EnergyPoint = other.EnergyPoint;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " \
        << this->AttackDamage<<" points of damage!" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->Name << " got damaged with " << amount \
    << " pointd " << std::endl;
    this->HitPoint -= amount;
    if(this->HitPoint <= 0)
        std::cout << "U'VE BEEN SLAYED BY THE ENEMY" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->Name << " got repaired with " << amount \
        << " pointd " << std::endl;
        this->HitPoint += amount;
        this->EnergyPoint--;
    }
    else
        std::cout << "THE END IS NEAAAAR NIHAHAHA" << std::endl;
}
