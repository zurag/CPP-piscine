#ifndef ICE_HPP
# define ICE_HPP

#include "headers.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const &copy);
	Ice &operator=(Ice const &copy);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	~Ice();
};

#endif