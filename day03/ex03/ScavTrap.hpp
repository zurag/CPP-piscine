#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	ScavTrap & operator = (const ScavTrap &copy);
	void guardGate();
	~ScavTrap();
};

#endif