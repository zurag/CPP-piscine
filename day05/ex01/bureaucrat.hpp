#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class GradeTooHighException: public std::exception
{
private:
	std::string _error;
public:
	void setError(std::string error);
	GradeTooHighException(std::string error);
	const char* what() const throw();
	~GradeTooHighException() throw();
};

class GradeTooLowException: public std::exception
{
private:
	std::string _error;
public:
	void setError(std::string error);
	GradeTooLowException(std::string error);
	const char* what() const throw();
	~GradeTooLowException() throw();
};

class Bureaucrat
{
private:
	const std::string _name;
	int			_grade;
public:
	GradeTooHighException	_hight;
	GradeTooLowException	_low;
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &copy);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	Bureaucrat &operator=(const Bureaucrat &copy);
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
