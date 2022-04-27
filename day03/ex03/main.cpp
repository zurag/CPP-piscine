#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("A");
	a.WhoAmI();
	std::cout << a.get_damage() << " ";
	std::cout << a.get_energy() << " ";
	std::cout << a.get_hit_points() << " " << std::endl;
	a.attack("no target");
	a.highFivesGuys();
	a.guardGate();
	return 0;
}
