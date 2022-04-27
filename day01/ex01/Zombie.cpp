#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name)
{
	z_name.assign(zombie_name);
}

Zombie::Zombie()
{

}

void	Zombie::set_zombie_name(std::string name)
{
	z_name.assign(name);
}

void	Zombie::announce()
{
	std::cout << z_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << z_name << ": has been destructed" << std::endl;
}


