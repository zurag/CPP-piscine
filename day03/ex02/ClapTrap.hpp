#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	name_;
	int	hit_points_;
	int	energy_;
	int	damage_;
	bool check_energy(void);
	bool check_hit_ponits(void);
public:
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap & operator = (const ClapTrap &new_name);

	int		get_energy(void) const;
	int		get_hit_points(void) const;
	int		get_damage(void) const;
	std::string	get_name(void) const;

	void	set_energy(int	energy);
	void	set_hit_points(int	hit_points);
	void	set_damage(int	damage);
	void	set_name(std::string	name);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	~ClapTrap();
};

#endif