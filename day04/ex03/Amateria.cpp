#include "headers.hpp"

AMateria::AMateria(std::string const & type):_type(type)
{
}

AMateria::AMateria(AMateria const &copy):_type(copy.getType())
{
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
}


AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	_type.assign(copy.getType());
	return *this;
}