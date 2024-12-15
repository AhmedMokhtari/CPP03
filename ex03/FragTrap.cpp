#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name):ClapTrap(name){
    std::cout << "String Constructor has been called form FragTrap\n" ;
    hit_point = 100;
    energy = 100;
    damage = 30;
}

FragTrap::FragTrap():ClapTrap("no_name"){
    std::cout << "Default Constructor has been called form FragTrap\n" ;
    hit_point = 100;
    energy = 100;
    damage = 30;
}

FragTrap::FragTrap(const FragTrap &cp) :ClapTrap(cp){
    std::cout << "Copy Constructor has been called form FragTrap\n" ;
}

FragTrap& FragTrap::operator =(const FragTrap &cp){
    std::cout << "Assignment operator has been called form FragTrap\n" ;
    ClapTrap::operator=(cp);
    return *this; 
}

FragTrap::~FragTrap(){
    std::cout << "Destructor has been called form FragTrap\n" ;

}

void FragTrap::highFivesGuys(void){
    std::cout << "high fives request" << name  << std::endl;
}
