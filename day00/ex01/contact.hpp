#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>

class Contact
{
private:
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_phone_nmbr;
	std::string m_secret;

public :
	
	Contact(){}
	void		new_first_name(std::string first_name);
	void		new_last_name(std::string last_name);
	void		new_nickname(std::string nickname);
	void		new_phone_nmbr(std::string phone_nmbr);
	void		new_secret(std::string secret);

	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_nmbr();
	std::string	get_secret();
		

	void	new_contact(std::string first_name, std::string last_name, 
			std::string nickname, std::string phone_nmbr, 
			std::string secret);
	void	print();
};

#endif
