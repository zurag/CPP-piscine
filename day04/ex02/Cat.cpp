#include "Cat.hpp"

void Cat::MakeSound() const
{
	std::cout << "Meooow" << std::endl;
}

Cat&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy operator called" << std::endl;
	type_.assign(copy.GetType());
	brain = copy.brain;
	return *this;
}

Cat::Cat(Cat &copy): Animal(copy)
{
	brain = copy.brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat (): Animal("Cat")
{
	brain = new(Brain);
	std::cout << "Cat defalt constructor" << std::endl;
}

Cat::~Cat ()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}
