#include "Zombie.hpp"

int main ()
{
	std::string	name = "Jack";
	int	z_count = 5;
	Zombie *horde = zombieHorde(z_count, name);
	for(int i = 0; i < z_count; i++)
	{
		std::cout << "zombie " << i << std::endl;
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}