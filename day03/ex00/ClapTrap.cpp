#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name_(name), hit_points_(10), energy_(10), damage_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): name_(copy.name_), hit_points_(10), energy_(10), damage_(0)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &new_name)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name_ = new_name.name_;
	hit_points_ = new_name.hit_points_;
	energy_ = new_name.energy_;
	damage_ = new_name.damage_;
	return (*this);
}

bool ClapTrap::check_energy(void)
{
	if (energy_ == 0)
	{
		std::cout << name_ << " has no egergy" << std::endl;
		return false;
	}
	return true;
}

bool ClapTrap::check_hit_ponits(void)
{
	if (hit_points_ == 0)
	{
		std::cout << name_ << " has no hits point" << std::endl;
		return false;
	}
	return true;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!check_energy())
		return ;
	if (!check_hit_ponits())
		return ;
	std::cout << name_ << " attacks " << target << " causing " << damage_ << " points of damage!" << std::endl;
	--energy_;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!check_hit_ponits())
		return ;
	std::cout << name_ << " lost " << amount << " hit points"<< std::endl;
	hit_points_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy())
		return ;
	if (!check_hit_ponits())
		return ;
	--energy_;
	std::cout << name_ << " repaired " << amount << " hit points"<< std::endl;
}

int 	ClapTrap::get_energy() const
{
	return (energy_);
}

int 	ClapTrap::get_hit_points() const
{
	return (hit_points_);
}

int 	ClapTrap::get_damage() const
{
	return (damage_);
}
