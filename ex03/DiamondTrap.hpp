#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string name;
    public :
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &cp);
        DiamondTrap& operator =(const DiamondTrap &cp);
        void attack(const std::string& target);
        void whoAmI();
};