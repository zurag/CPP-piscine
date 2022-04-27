#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "headers.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {};
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria *_material[4];
public:
	Character(std::string const name);
	Character(Character const &copy);
	Character &operator=(Character const &copy);
	~Character();
	virtual std::string const & getName() const;
	AMateria *getCopyMateria(int idx) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif