#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &ha_weapon;
	std::string ha_name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	~HumanA();
};

#endif