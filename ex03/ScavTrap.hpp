#pragma once

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap{
    public :
    ScavTrap(const std::string &name);
    ScavTrap();
    ScavTrap(const ScavTrap &cp);
    ScavTrap& operator =(const ScavTrap &cp);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();

};