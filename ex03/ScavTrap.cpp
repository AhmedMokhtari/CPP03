#include "ScavTrap.hpp"

// : name(name), hit_point(100), energy(50), damage(20)
// ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), hit_point(100), energy(50), damage(20){
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    // this->name = name;
    hit_point = 100;
    energy = 50;
    damage = 20;
    std::cout << "String COnstructor has been called From ScavTrap \n";
}

ScavTrap::ScavTrap(){
    this->name = "NO_NAME";
    hit_point = 100;
    energy = 50;
    damage = 20;
    std::cout << "Default Constructor has been called From ScavTrap \n";
}

ScavTrap::ScavTrap(const ScavTrap &cp): ClapTrap(cp){
    std::cout << "ScavTrap Copy Constructor Called \n";
}

ScavTrap& ScavTrap::operator= (const ScavTrap &cp){
    std::cout << "Assignment operator called  From ScavTrap \n";
    ClapTrap::operator=(cp);
    return *this;
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