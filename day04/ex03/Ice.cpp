#include "headers.hpp"

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at <name> *" << target.getName() << std::endl;
}

Ice::Ice():AMateria("ice")
{
}

Ice::Ice(Ice const &copy):AMateria(copy)
{
}

Ice &Ice::operator=(Ice const &copy)
{
	AMateria::_type = copy.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *clone = new Ice();
	return clone;
}

Ice::~Ice()
{
}