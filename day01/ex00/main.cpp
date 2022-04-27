#include "Zombie.hpp"

int main ()
{
	std::string	name = "Jack";
	Zombie *jack = newZombie(name);
	jack->announce();
	delete(jack);
	name = "Robert";
	randomChump(name);
	return (0);
}