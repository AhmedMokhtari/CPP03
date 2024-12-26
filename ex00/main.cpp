#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("ALo");

    ClapTrap a = clap;
    clap.takeDamage(10);
    clap.attack("Test");
    std::cout << "HELlo \n";

    return 0;
}