#ifndef FORM_HPP
# define FORM_HPP

#include "bureaucrat.hpp"


class	Bureaucrat;

class Form
{
protected:
	void check_grade(Bureaucrat const & bur) const;
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSig;
	const int			_gradeExec;
public:
	Form(std::string name, int gradeSig, int gradeExec);
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	void beSigned(const Bureaucrat &bereaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	int getGradeSig() const;
	int getGradeExec() const;
	std::string getName() const;
	bool getSign() const;
	void setSign(bool sig);
	virtual ~Form();
};

std::ostream &operator <<(std::ostream &out, const Form &form);


#endif