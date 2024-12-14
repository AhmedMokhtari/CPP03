#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    std::cout << "String COnstructor has been called From ScavTrap \n";
}

ScavTrap::~ScavTrap(){
  std::cout << "Destructor has been called From ScavTrap\n";

}

void ScavTrap::attack(const std::string& target){
    if (energy  && hit_point)
    {
        std::cout << "ScavTrap " << name  << " attacks " << target << ", causing " << damage << " points of damage!\n";
        energy--;
    }
}

void ScavTrap::guardGate(){
  std::cout << "ScavTrap"  << name << " is now in Gate keeper mode";
}