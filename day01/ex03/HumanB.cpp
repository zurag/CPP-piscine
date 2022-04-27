#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	hb_name.assign(name);
	hb_weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << hb_name << " attacks with their " << hb_weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
	hb_weapon = &weapon;
}
