#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
:ha_weapon(weapon),ha_name(name)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << ha_name << " attacks with their " << ha_weapon.getType() << std::endl;
}
