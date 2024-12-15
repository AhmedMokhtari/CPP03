#include  "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap("no_name"), FragTrap("no_name")
{
    std::cout << "Default Constructor has been called form DiamondTrap\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor has been called form DiamondTrap\n";

}

DiamondTrap::DiamondTrap(const std::string &name): ScavTrap(name), FragTrap(name){
    std::cout << "String Constructor has been called form DiamondTrap\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp):ClapTrap(cp), ScavTrap(cp), FragTrap(cp){
    std::cout << "Copy Constructor has been called form DiamondTrap\n";
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap &cp){
    std::cout << "operator = has been called form DiamondTrap\n";
    ClapTrap::operator=(cp);
    return *this;
}


void DiamondTrap::whoAmI(){
    std::cout << "name is " << this->name << " Claptrap::name " << std::endl;
}


// void DiamondTrap::attack(const std::string& target){
//     if (energy  && hit_point)
//     {
//         std::cout << "DiamondTrap " << name  << " attacks " << target << ", causing " << damage << " points of damage!\n";
//         energy--;
//     }
// }

