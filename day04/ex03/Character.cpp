#include "headers.hpp"

Character::Character(std::string const name):_name(name)
{
	for (int i = 0; i < 4; i++)
		_material[i] = NULL;
}

Character::Character(Character const &copy):_name(copy.getName())
{
	AMateria *tmp;
	
	for (int i = 0; i < 4; i++)
	{
		if (_material[i])
			delete _material[i];
	}
	for (int i = 0; i < 4; i++)
	{
		tmp = copy.getCopyMateria(i);
		if (tmp)
			_material[i] = tmp;
	}
}

Character &Character::operator=(Character const &copy)
{
	AMateria *tmp;
	
	for (int i = 0; i < 4; i++)
	{
		if (_material[i])
			delete _material[i];
	}
	_name.assign(copy.getName());
	for (int i = 0; i < 4; i++)
	{
		tmp = copy.getCopyMateria(i);
		if (tmp)
			_material[i] = tmp;
	}
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	_material[idx]->use(target);
}


AMateria *Character::getCopyMateria(int idx) const
{
	if (idx < 0 || idx > 3)
		return NULL;
	return _material[idx]->clone();
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_material[i])
		{
			_material[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	_material[idx] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_material[i])
			delete _material[i];
	}
}
