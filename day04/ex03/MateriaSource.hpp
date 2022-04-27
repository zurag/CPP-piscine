#ifndef  MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "headers.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria* ) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
private:
	int	searchMateriaIndex(std::string materia);
	AMateria *_material[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	AMateria *getCopyMateria(int idx) const;
	MateriaSource &operator=(MateriaSource const &copy);
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);
	~MateriaSource();
};

#endif