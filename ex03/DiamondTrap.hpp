#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        std::string name;
    public :
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &cp);
        DiamondTrap& operator =(const DiamondTrap &cp);
        // void attack(const std::string& target);
        void whoAmI();
};