#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Unamed"), HitPoint(10), \
                                        EnergyPoint(10), AttackDamage(10) 
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string passedName): Name(passedName), HitPoint(10), \
                                            EnergyPoint(10), AttackDamage(10) 
{
    std::cout << "ClapTrap Named Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap Copy Construct Called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy assignment operator Called" << std::endl;
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
    if (this->EnergyPoint > 0 && this->HitPoint > 0 )
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage<<" points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if(this->EnergyPoint == 0)
        std::cout << "ClapTrap " << this->Name << " cannot attacks " << target << " no Energy points are left!" << std::endl;
    else if(this->HitPoint == 0)
        std::cout << "ClapTrap " << this->Name << " cannot attacks " << target << " no Hit points are left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->Name << " got damaged with " << amount << " pointd " << std::endl;
    this->HitPoint -= amount;
    if(this->HitPoint <= 0)
    {
        std::cout << "U'VE BEEN SLAYED BY THE ENEMY" << std::endl;
        return ;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        std::cout << "ClapTrap " << this->Name << " got repaired with " << amount \
        << " pointd " << std::endl;
        this->HitPoint += amount;
        this->EnergyPoint--;
    }
    else if(this->EnergyPoint == 0)
        std::cout << "ClapTrap " << this->Name << " canno't get repaired No Energy left!" << std::endl;
    else if(this->HitPoint == 0)
        std::cout << "ClapTrap " << this->Name << " canno't get repaired No Hit point left!" << std::endl;
}
