#include "phonebook.hpp"


Phonebook::Phonebook()
{
	m_cont_id = 0;
}


void	Phonebook::print_bloc(std::string word)
{
	std::string tmp;

	if (word.length() > 10)
	{
		tmp = word.substr(0, 10);
		tmp[9] = '.';
	} else
		tmp = word;
	std::cout << "|";
	std::cout << std::setw(10) << tmp;
}

void	Phonebook::add()
{
	std::string tmp;

	if (m_cont_id == 8)
		m_cont_id = 0;
	std::cout << "Enter first name: ";
	std::cin >> tmp;
	cont[m_cont_id].new_first_name(tmp);
	std::cout << "Enter last name: ";
	std::cin >> tmp;
	cont[m_cont_id].new_last_name(tmp);
	std::cout << "Enter nickname: ";
	std::cin >> tmp;
	cont[m_cont_id].new_nickname(tmp);
	std::cout << "Enter phone number: ";
	std::cin >> tmp;
	cont[m_cont_id].new_phone_nmbr(tmp);
	std::cout << "Enter your secret: ";
	std::cin >> tmp;
	cont[m_cont_id].new_secret(tmp);
	m_cont_id++;
}

void	Phonebook::search()
{
	std::string tmp;
	int cont_nbr = 0;

	std::string line(45, '-');
	std::cout << line << std::endl;
	print_bloc("  index  ");
	print_bloc("first name");
	print_bloc("last  name");
	print_bloc("nickname ");
	std::cout << "|" << std::endl;
	std::cout << line << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (cont[i].get_first_name().empty())
			break;
		tmp.assign(1, '0' + i + 1);
		print_bloc(tmp);
		print_bloc(cont[i].get_first_name());
		print_bloc(cont[i].get_last_name());
		print_bloc(cont[i].get_nickname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << line << std::endl;
	}
	std::cout << "Enter contact index:";
	std::cin >> cont_nbr;
	std::cin.clear();
	std::cin.ignore(30000, '\n');
	if (cont_nbr > 8 || cont_nbr < 1)
		std::cerr << "wrong index" << std::endl;
	else
		cont[cont_nbr - 1].print();
}

void	Phonebook::ft_exit()
{
	exit(EXIT_SUCCESS);
}
