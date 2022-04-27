#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	ClapTrap::set_damage(20);
	ClapTrap::set_energy(50);
	ClapTrap::set_hit_points(100);
}

ScavTrap::ScavTrap(ScavTrap &copy):ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;

}

ScavTrap & ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	ClapTrap::set_damage(copy.get_damage());
	ClapTrap::set_energy(copy.get_energy());
	ClapTrap::set_hit_points(copy.get_hit_points());
	ClapTrap::set_name(copy.get_name());
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}