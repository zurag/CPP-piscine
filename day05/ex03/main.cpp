#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat bur1("bur1", 1);
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	bur1.signForm(*rrf);
	bur1.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	bur1.signForm(*rrf);
	bur1.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	bur1.signForm(*rrf);
	bur1.executeForm(*rrf);
	delete rrf;
	try{
		rrf = someRandomIntern.makeForm("fwes", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}
