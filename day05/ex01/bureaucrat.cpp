#include "Form.hpp"
#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, const int grade)
: _name(name), _low("Bureaucrat grade too low"), _hight("Bureaucrat grade too hight")
{	
	_grade = grade;
	if (_grade < 1)
	{
		throw _hight;
	}
	if (_grade > 150)
	{
		throw _low;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
:_name(copy.getName()),  _low("Bureaucrat grade too low"), _hight("Bureaucrat grade too hight")
{
	_grade = copy._grade;
	if (_grade < 1)
		throw _hight;
	if (_grade > 150)
		throw _low;
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

const char* GradeTooLowException::what() const throw()
{
	return _error.c_str();
}

const char* GradeTooHighException::what() const throw()
{
	return _error.c_str();
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

GradeTooLowException::GradeTooLowException(std::string error):_error(error)
{
}

void GradeTooLowException::setError(std::string error)
{
	_error.assign(error);
}

GradeTooLowException::~GradeTooLowException() throw()
{

}

GradeTooHighException::GradeTooHighException(std::string error):_error(error)
{
}

void GradeTooHighException::setError(std::string error)
{
	_error.assign(error);
}

GradeTooHighException::~GradeTooHighException() throw()
{

}


void Bureaucrat::signForm(Form &form)
{

	try{
		form.beSigned(*this);
		std::cout << _name << ", bereaucrat signed form" << std::endl;
	}
	catch(GradeTooLowException &low)
	{
		std::cerr << _name << ", bereaucrat  couldn't sign form " << form.getName() << " because ";
		std::cerr << low.what() << std::endl;
	}
}