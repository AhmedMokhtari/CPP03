#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap sc("ALo ");
    // ClapTrap *sc = new ScavTrap("ALo");
    // sc->attack("test");
    sc.attack("test");
    // std::cout << "HELlo \n";
    // delete sc;
    return 0;
}