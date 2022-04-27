#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <ctime>

class	Bureaucrat;
class	Form;

class PresidentialPardonForm: public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string target, std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
	~PresidentialPardonForm();
};

#endif