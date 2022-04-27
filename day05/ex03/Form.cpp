#include "bureaucrat.hpp"

Form::Form(const Form &copy)
:_name(copy.getName()), _gradeExec(copy.getGradeExec()), _gradeSig(copy.getGradeSig())
{
	GradeTooHighException	_hight("");
	GradeTooLowException	_low("");

	_signed = copy.getSign();
	if (_gradeExec  > 150)
	{
		_low.setError("Form execute grade is low");
		throw _low ;
	}
	if (_gradeSig > 150)
	{
		_low.setError("Form sign grade is low");
		throw _low ;		
	}
	if (_gradeExec  < 1)
	{
		_hight.setError("Form executen grade is hight");
		throw _hight ;
	}
	if (_gradeSig < 1)
	{
		_hight.setError("Form sign grade is hight");
		throw _hight ;
	}
}

void Form::check_grade(Bureaucrat const & bur) const
{
	GradeTooLowException	low("");
	const int ber_grade = bur.getGrade();
	if (!getSign())
	{
		low.setError("Form doesn't sign");
		throw low;
	}
	if (ber_grade > _gradeSig)
	{
		low.setError("grade is lower than Form sign grade");
		throw low;
	}
	if (ber_grade > _gradeExec)
	{
		low.setError("grade is lower than Form exec grade");
		throw low;
	}
}

Form::Form(std::string name, int gradeSig, int gradeExec)
:_name(name), _gradeExec(gradeExec), _gradeSig(gradeSig)
{
	GradeTooHighException	_hight("");
	GradeTooLowException	_low("");

	_signed = false;
	if (_gradeExec  > 150)
	{
		_low.setError("Form execute grade is low");
		throw _low ;
	}
	if (_gradeSig > 150)
	{
		_low.setError("Form sign grade is low");
		throw _low ;		
	}
	if (_gradeExec  < 1)
	{
		_hight.setError("Form executen grade is hight");
		throw _hight ;
	}
	if (_gradeSig < 1)
	{
		_hight.setError("Form sign grade is hight");
		throw _hight ;
	}
}

void Form::setSign(bool sig)
{
	_signed = sig;
}

Form &Form::operator=(const Form &copy)
{
	_signed = copy.getSign();
	return *this;
}

int Form::getGradeSig() const
{
	return _gradeSig;
}

int Form::getGradeExec() const
{
	return _gradeExec;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSign() const
{
	return _signed;
}

std::ostream &operator <<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", Form: grade sig == " << form.getGradeSig();
	out << " grade exec == " << form.getGradeExec() << " signing status == " << form.getSign();
	return out;
}

Form::~Form()
{

}

void Form::beSigned(const Bureaucrat &bereaucrat)
{
	GradeTooLowException	low("");

	const int ber_grade = bereaucrat.getGrade();
	if (ber_grade > _gradeSig)
	{
		low.setError("grade is lower than Form sign grade");
		throw low;
	}
	else
		_signed = true;
}
