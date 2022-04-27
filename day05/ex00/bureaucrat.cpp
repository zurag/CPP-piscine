#include "bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{	
	_grade = grade;
	if (_grade < 1)
		throw _hight;
	if (_grade > 150)
		throw _low;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy.getName())
{
	_grade = copy._grade;
	if (_grade < 1)
		throw _hight;
	if (_grade > 150)
		throw _low;
}

const char* GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

int Bureaucrat::getGrade() const{
	return (_grade);
}

std::string Bureaucrat::getName() const{
	return (_name);
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat){

	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy.getGrade();
	if (_grade < 1)
		throw _hight;
	if (_grade > 150)
		throw _low;
	return *this;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw _hight;
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw _low;
	_grade++;
}


Bureaucrat::~Bureaucrat()
{

}

// GradeTooLowException::GradeTooLowException(std::string error):_error(error)
// {
// }

// GradeTooHighException::GradeTooHighException(std::string error):_error(error)
// {
// }

// GradeTooHighException::~GradeTooHighException()
// {
// }