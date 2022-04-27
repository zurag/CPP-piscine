#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string trap_name):
name_(trap_name), ClapTrap(trap_name + "_clap_name"), FragTrap(trap_name + "_clap_name"),
ScavTrap(trap_name + "ScavTrap")
{
	ClapTrap::set_damage(30);
	ClapTrap::set_energy(50);
	ClapTrap::set_hit_points(100);
}

DiamondTrap::DiamondTrap(DiamondTrap &copy):
name_(copy.get_name()), ClapTrap(copy), FragTrap(copy),
ScavTrap(copy)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	set_name(copy.get_name());
	ClapTrap::set_damage(copy.get_damage());
	ClapTrap::set_energy(copy.get_energy());
	ClapTrap::set_hit_points(copy.get_hit_points());
	return *this;
}

std::string	DiamondTrap::get_name(void) const
{
	return (name_);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI()
{
	std::cout << "DiamondTrap name == " << get_name() << std::endl;
	std::cout << "ClapTrap name == " << ClapTrap::get_name() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}