#ifndef INTERN_HPP
# define INTERN_HPP


#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class FormDoesnotExist: public std::exception
{
public:
	const char* what() const throw();
};

class Intern
{
public:
	Intern();
	Intern(Intern &copy);
	Intern &operator=(Intern &copy);
	Form *makeForm(std::string form_name, std::string target);
	~Intern();
};

#endif