#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	z_name;
public:
	Zombie(std::string zombie_name);
	void	announce();
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
