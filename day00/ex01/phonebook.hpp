#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
private:
	int	m_cont_id;
	Contact	cont[8];
	void	print_bloc(std::string word);

public:
	Phonebook();
	void	add();
	void	search();
	void	ft_exit();
};

#endif