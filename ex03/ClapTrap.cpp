#include "ClapTrap.hpp"


 ClapTrap::ClapTrap(const std::string &name):name(name), hit_point(10), energy(10), damage(0){
    std::cout << "String COnstructor has been called From ClapTrap\n";
 }

 ClapTrap::ClapTrap():name("no_name"),  hit_point(10), energy(10), damage(0){
    std::cout << "Default Constructor has been called From ClapTrap \n";
 }

ClapTrap::~ClapTrap(){
  std::cout << "Destructor has been called From ClapTrap \n";
}

ClapTrap::ClapTrap(const ClapTrap &cp){
    std::cout << "ClapTrap Copy Constructor Called \n";
     if (this != &cp)
        operator=(cp);
}

ClapTrap& ClapTrap::operator= (const ClapTrap &cp){
    std::cout << "Assignment operator called From ClapTrap \n";
    if (this != &cp)
    {
        this->damage = cp.damage;
        this->hit_point = cp.hit_point;
        this->energy = cp.energy;
        this->name = cp.name;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (energy  && hit_point)
    {
        std::cout << "ClapTrap " << name  << " attacks " << target << ", causing " << damage << " points of damage!\n";
        energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount > 0 && amount <= damage && energy && hit_point)
    {
        std::cout << "ClapTrap " << name  << ", takeDamage " << amount << " points of damage!\n";
        damage -= amount;
        // energy--; 
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (amount > 0 && energy && hit_point)
    {
        std::cout << "ClapTrap " << name  << ", Repaired " << amount << " points of hit_point!\n";
        hit_point += amount;
        energy--;
    }
}