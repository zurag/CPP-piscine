#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat &copy);
	Cat &operator=(const Cat &copy);
	virtual void MakeSound() const;
	~Cat();
};

#endif