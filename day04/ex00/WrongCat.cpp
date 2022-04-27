#include "WrongCat.hpp"

void WrongCat::MakeSound() const
{
	std::cout << "Meooow" << std::endl;
}


WrongCat&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat copy operator called" << std::endl;
	type_.assign(copy.GetType());
	return *this;
}

WrongCat::WrongCat(WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::WrongCat (): WrongAnimal("Cat")
{
	std::cout << "WrongCat defalt constructor" << std::endl;
}

WrongCat::~WrongCat ()
{
	std::cout << "Cat destructor called" << std::endl;
	WrongAnimal::~WrongAnimal();
}