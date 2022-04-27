#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	ClapTrap::set_damage(30);
	ClapTrap::set_energy(100);
	ClapTrap::set_hit_points(100);
}

FragTrap::FragTrap(FragTrap &copy):ClapTrap(copy)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	ClapTrap::set_damage(copy.get_damage());
	ClapTrap::set_energy(copy.get_energy());
	ClapTrap::set_hit_points(copy.get_hit_points());
	ClapTrap::set_name(copy.get_name());
	return *this;
}

FragTrap::~FragTrap()
{
	ClapTrap::~ClapTrap();
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap give high fives" << std::endl;
}