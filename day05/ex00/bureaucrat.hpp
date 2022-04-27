#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

#include <iostream>
#include <ostream>
#include <string>
#include <exception>

class GradeTooHighException: public std::exception
{
public:
	const char* what() const throw();
};

class GradeTooLowException: public std::exception
{
public:
	const char* what() const throw();
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
	Bureaucrat &operator=(const Bureaucrat &copy);
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
