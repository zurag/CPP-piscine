#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("a_trap");
	FragTrap b("b_trap");
	FragTrap c(a);

	b = a;
	b.set_name("b_trap");
	for (int i = 0; i < 1; i++)
	{
		a.attack("b");
		std::cout << "a energy == " << a.get_energy() << std::endl;
		b.takeDamage(a.get_damage());
		std::cout << "b hit_point  == " << b.get_hit_points() << std::endl;
	}
	a.attack("b");
	a.attack("b");
	b.beRepaired(10);
	c.highFivesGuys();
	return 0;
}
