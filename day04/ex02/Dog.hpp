#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"


class Dog :public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog &copy);
	Dog &operator=(const Dog &copy);
	virtual void MakeSound() const;
	virtual ~Dog();
};

#endif