#ifndef CURE_HPP
# define CURE_HPP

#include "headers.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	Cure &operator=(Cure const &copy);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	~Cure();
};

#endif