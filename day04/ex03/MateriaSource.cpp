#include "headers.hpp"

AMateria *MateriaSource::getCopyMateria(int idx) const
{
	if (idx < 0 || idx > 3)
		return NULL;
	return _material[idx]->clone();
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_material[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
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

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
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
	return *this;
}

int	MateriaSource::searchMateriaIndex(std::string materia)
{
	std::string tmp;

	for (int i = 0; i < 4; i++)
	{
		if (_material[i])
		{
			tmp = _material[i]->getType();
			if (tmp == materia)
				return i;
		}
	}
	return -1;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (searchMateriaIndex(materia->getType()) == -1)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_material[i])
			{
				_material[i] = materia;
				break ;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int index = searchMateriaIndex(type);

	if (index != -1)
		return (_material[index]->clone());
	return 0;	
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_material[i])
		{
			std::cout << "Material source destructor" << std::endl;
			delete _material[i];
		}
	}
}
