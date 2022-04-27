#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class	Bureaucrat;
class	Form;

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target, std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

#endif