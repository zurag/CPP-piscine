#include "Dog.hpp"

void Dog::MakeSound() const
{
	std::cout << "AWOOOOf" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog copy operator called" << std::endl;
	type_.assign(copy.GetType());
	return *this;
}

Dog::Dog(Dog &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog defalt constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
