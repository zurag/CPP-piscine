#include "Dog.hpp"

void Dog::MakeSound() const
{
	std::cout << "AWOOOOf" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy operator called" << std::endl;
	type_.assign(copy.GetType());
	brain = copy.brain;
	return *this;
}

Dog::Dog(Dog &copy) : Animal(copy)
{
	brain = copy.brain;
	std::cout << "Dog  copy constructor called" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
	brain = new(Brain);
	std::cout << "Dog defalt constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Gog destructor called" << std::endl;
}
