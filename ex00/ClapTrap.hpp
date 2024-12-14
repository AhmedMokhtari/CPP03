#pragma once
#include <iostream>


class ClapTrap{
    private :
        std::string name;
        unsigned int hit_point;
        unsigned int energy;
        unsigned int damage;
    public:
        ClapTrap(const std::string &name);
        ClapTrap();
        ClapTrap(const ClapTrap &cp);
        ClapTrap& operator= (const ClapTrap &cp);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};