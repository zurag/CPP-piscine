#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->MakeSound();
	j->MakeSound();
	meta->MakeSound();


	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << wi->GetType() << " " << std::endl;
	wi->MakeSound();
	wmeta->MakeSound();
	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wi;
	return 0;
}
