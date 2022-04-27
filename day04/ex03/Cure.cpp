#include "headers.hpp"

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(Cure const &copy):AMateria(copy)
{
}

Cure &Cure::operator=(Cure const &copy)
{
	AMateria::_type = copy.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *clone = new Cure();
	return clone ;
}

Cure::~Cure()
{
}