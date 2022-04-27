#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *new_z = new (std::nothrow)Zombie(name);
	return (new_z);
}
