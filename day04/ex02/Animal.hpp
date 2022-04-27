#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	type_;
public:
	Animal(std::string type = "none");
	Animal(Animal &copy);
	std::string GetType(void) const;
	virtual void MakeSound() const = 0;
	Animal &operator =(const Animal &copy);
	void SetType(std::string type);
	virtual ~Animal();
};

#endif