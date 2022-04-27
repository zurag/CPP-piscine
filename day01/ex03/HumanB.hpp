#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *hb_weapon;
	std::string hb_name;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack();
	~HumanB();
};

#endif