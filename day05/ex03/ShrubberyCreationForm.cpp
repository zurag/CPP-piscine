#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string name):
_target(target), Form(name, 145, 137)
{
	Form::setSign(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
_target(copy.getTarget()), Form(copy)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	Form::setSign(copy.getSign());
	_target.assign(copy.getTarget());
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	check_grade(executor);
	std::ofstream	file;
	file.open(_target + "_shrubbery");
	if (!file)
		return ;
	file
	<< "\t        >X<				\n"
	<< "\t         A				\n"
	<< "\t        d$b				\n"
	<< "\t      .dwd$b.				\n"
	<< "\t    .d$i$$wd$b.			\n"
	<< "\t       d$$@b				\n"
	<< "\t      dwd$$ib				\n"
	<< "\t    .d$$$wd$$b			\n"
	<< "\t  .d$$@$$$$wd$ib.			\n"
	<< "\t      d$$i$$b				\n"
	<< "\t     dwd$$$@$b			\n"
	<< "\t  .d$@$$wd$$$$@b.			\n"
	<< "\t.d$$$$i$$$wd$$$$$b.		\n"
	<< "\t        ###				\n"
	<< "\t        ###				\n"
	<< "\t        ###				\n";
	file.close();
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}