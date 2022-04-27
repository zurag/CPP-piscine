#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, virtual public ScavTrap
{
private:
	std::string name_;
public:
	DiamondTrap(std::string trap_name);
	void	attack(const std::string& target);
	std::string	get_name(void) const;
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap &operator=(const DiamondTrap &copy);
	void WhoAmI();
	~DiamondTrap();
};

#endif