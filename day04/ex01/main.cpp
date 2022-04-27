#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"



int main()
{
	{
		std::cout << "** Leak Detection **\n\n";
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;  // should not create a leak
		delete i;
	}
	{
		std::cout << "\n** Array of Animals Test **\n\n";
		Animal* animals[4] = {new Dog(), new Dog(), new Cat(),
							  new Cat()};
		for (int i = 0; i < 4; i++)
			animals[i]->MakeSound();
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}
	return 0;
}
