#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, std::string name):
_target(target), Form(name, 72, 45)
{
	Form::setSign(false);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
_target(copy.getTarget()), Form(copy)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	Form::setSign(copy.getSign());
	_target.assign(copy.getTarget());
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	check_grade(executor);
	std::srand(std::time(NULL));
	int tmp = rand();
 	if (tmp % 2)
		std::cout << _target << " has been robotomized\n";
	else
		 std::cout << "robotomy " << _target << " failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}