#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	type_;
public:
	WrongAnimal(std::string type = "none");
	WrongAnimal(WrongAnimal &copy);
	std::string GetType(void) const;
	void MakeSound() const;
	WrongAnimal &operator =(const WrongAnimal &copy);
	void SetType(std::string type);
	~WrongAnimal();
};



#endif