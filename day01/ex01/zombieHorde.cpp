#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *new_z = new (std::nothrow)Zombie[n];

	for(int i = 0; i < n; i++)
	{
		new_z[i].set_zombie_name(name);
	}
	return (new_z);
}