#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type):type_(type)
{
	std::cout << "WrongAnimal defalt constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy):type_(copy.GetType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy operator called" << std::endl;
	SetType(copy.GetType());
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::MakeSound() const
{
	std::cout << "WRONG SOUND from class animal" << std::endl;
}

std::string WrongAnimal::GetType(void) const
{
	return (type_);
}

void WrongAnimal::SetType(std::string type)
{
	type_.assign(type);
}