#include "Animal.hpp"

Animal::Animal(std::string type):type_(type)
{
	std::cout << "Animal defalt constructor called" << std::endl;
}

Animal::Animal(Animal &copy):type_(copy.GetType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator =(const Animal &copy)
{
	std::cout << "Animal copy operator called" << std::endl;
	SetType(copy.GetType());
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::MakeSound() const
{
	std::cout << "WRONG SOUND from class animal" << std::endl;
}

std::string Animal::GetType(void) const
{
	return (type_);
}

void Animal::SetType(std::string type)
{
	type_.assign(type);
}
