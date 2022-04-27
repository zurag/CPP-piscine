#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	w_type.assign(type);
}
const std::string &Weapon::getType()
{
	const std::string &type_ref = w_type;
	return (type_ref);
}
void Weapon::setType(std::string new_type)
{
	w_type.assign(new_type);
}

Weapon::~Weapon()
{
	
}