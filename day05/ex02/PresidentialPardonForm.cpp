#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name):
_target(target), Form(name, 25, 5)
{
	Form::setSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
_target(copy.getTarget()), Form(copy)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	Form::setSign(copy.getSign());
	_target.assign(copy.getTarget());
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	check_grade(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}