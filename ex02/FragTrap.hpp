#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(const std::string &name);
        FragTrap();
        FragTrap(const FragTrap &cp);
        FragTrap& operator =(const FragTrap &cp);
        ~FragTrap();
        void highFivesGuys(void);
};