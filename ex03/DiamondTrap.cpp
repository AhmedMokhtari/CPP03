#include  "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("no_name_clap_name"),  FragTrap("no_name"), ScavTrap("no_name")
{
    std::cout << "Default Constructor has been called form DiamondTrap\n";
    name = "no_name";
    hit_point = FragTrap::hit_point;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor has been called form DiamondTrap\n";

}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name") ,FragTrap(name), ScavTrap(name) {
    std::cout << "String Constructor has been called form DiamondTrap\n";
    this->name = name;
    hit_point = FragTrap::hit_point;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp):ClapTrap(cp), FragTrap(cp), ScavTrap(cp){
    std::cout << "Copy Constructor has been called form DiamondTrap\n";
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap &cp){
    std::cout << "operator = has been called form DiamondTrap\n";
    ClapTrap::operator=(cp);
    return *this;
}


void DiamondTrap::whoAmI(){
    std::cout << "name is " << this->name << " Claptrap::name " << ClapTrap::name << std::endl;
}


void DiamondTrap::attack(const std::string& target){
    // if (energy  && hit_point)
    // {
    //     std::cout << "DiamondTrap " << name  << " attacks " << target << ", causing " << damage << " points of damage!\n";
    //     energy--;
    // }
    ScavTrap::attack(target);
}

