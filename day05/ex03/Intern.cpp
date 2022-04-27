#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &copy)
{
}

Intern &Intern::operator=(Intern &copy)
{
	return *this;
}

Intern::~Intern()
{
}

const char* FormDoesnotExist::what() const throw()
{
	return "Form doesn't exist";
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	FormDoesnotExist err;
	std::string array_forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form *form;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == array_forms[i])
		{
			switch (i)
			{
			case 0:
				form = new RobotomyRequestForm(target, form_name);
				std::cout << "Intern creates form " << form_name << std::endl;
				return form;
				break;
			case 1:
				form = new ShrubberyCreationForm(target, form_name);
				std::cout << "Intern creates form " << form_name << std::endl;
				return form;
				break;
			case 2:
				form = new PresidentialPardonForm(target, form_name);
				std::cout << "Intern creates form " << form_name << std::endl;
				return form;
				break;
			default:
				break;
			}
		}
	}
	throw err;
}
