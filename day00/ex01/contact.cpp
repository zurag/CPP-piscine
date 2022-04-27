#include "phonebook.hpp"


std::string	Contact::get_first_name(){return (m_first_name);}
std::string	Contact::get_last_name(){return (m_last_name);}
std::string	Contact::get_nickname(){return (m_nickname);}
std::string	Contact::get_phone_nmbr(){return (m_phone_nmbr);}
std::string	Contact::get_secret(){return (m_secret);}

void	Contact::new_first_name(std::string first_name)
{
	m_first_name.assign(first_name);
}

void	Contact::new_last_name(std::string last_name)
{
	m_last_name.assign(last_name);
}

void	Contact::new_nickname(std::string nickname)
{
	m_nickname.assign(nickname);
}

void	Contact::new_phone_nmbr(std::string phone_nmbr)
{
	m_phone_nmbr.assign(phone_nmbr);
}

void	Contact::new_secret(std::string secret)
{
	m_secret.assign(secret);
}

void	Contact::new_contact(std::string first_name, std::string last_name,
					std::string nickname, std::string phone_nmbr,
					std::string secret)
{
	m_first_name.assign(first_name);
	m_last_name.assign(last_name);
	m_nickname.assign(nickname);
	m_phone_nmbr.assign(phone_nmbr);
	m_secret.assign(secret);
}

void	Contact::print()
{
	if (!m_first_name.empty())
	{
		std::cout << "first_name is " << m_first_name << std::endl;
		std::cout << "lst_name is " << m_last_name << std::endl;
		std::cout << "nickname is " << m_nickname << std::endl;
		std::cout << "phone number is " << m_phone_nmbr << std::endl;
		std::cout << "secret is " << m_secret << std::endl;
	} else
		std::cerr << "contact does not exist" << std::endl;
}
