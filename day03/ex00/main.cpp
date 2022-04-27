#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a_trap");
	ClapTrap b("b_trap");
	
	for (int i = 0; i < 9; i++)
	{
		a.attack("b");
		std::cout << "a energy == " << a.get_energy() << std::endl;
		b.takeDamage(1);
		std::cout << "b hit_point  == " << b.get_hit_points() << std::endl;
	}
	a.attack("b");
	a.attack("b");
	b.beRepaired(10);
	return 0;
}
