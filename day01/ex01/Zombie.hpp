#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	z_name;
public:
	void set_zombie_name(std::string name);
	Zombie(std::string zombie_name);
	Zombie();
	void	announce();
	~Zombie();
};

Zombie* zombieHorde(int n, std::string name);

#endif
