#include  "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap("no_name"), ScavTrap("no_name")
{
    std::cout << "Default Constructor has been called form DiamondTrap\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor has been called form DiamondTrap\n";

}

DiamondTrap::DiamondTrap(const std::string &name):FragTrap(name), ScavTrap(name){
    std::cout << "String Constructor has been called form DiamondTrap\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp):FragTrap(cp), ScavTrap(cp){
    std::cout << "Copy Constructor has been called form DiamondTrap\n";
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap &cp){
    std::cout << "operator = has been called form DiamondTrap\n";
    ScavTrap::operator=(cp);
    return *this;
}