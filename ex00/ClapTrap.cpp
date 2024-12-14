#include "ClapTrap.hpp"


 ClapTrap::ClapTrap(const std::string &name):name(name), hit_point(10), energy(10), damage(0){
    std::cout << "Int COnstructor has been called \n";
 }

ClapTrap::~ClapTrap(){
  std::cout << "Destructor has been called \n";
}

void ClapTrap::attack(const std::string& target){
    if (energy  && hit_point)
    {
        std::cout << "ClapTrap " << name  << " attacks " << target << ", causing " << damage << " points of damage!\n";
        energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount > 0 && energy && hit_point)
    {
        std::cout << "ClapTrap " << name  << ", takeDamage " << amount << " points of damage!\n";
        damage += amount;
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