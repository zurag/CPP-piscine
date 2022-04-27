#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try{
		ShrubberyCreationForm Sform("file", "sform");
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}	
	ShrubberyCreationForm Dform("file", "sform");
	try{
		Bureaucrat bur1("bur1", 100);
		bur1.signForm(Dform);
		bur1.executeForm(Dform);
	}
	catch(std::exception &e){
		e.what();
	}
	try{
		Bureaucrat bur1("bur2", 6);
		bur1.signForm(Dform);
		bur1.executeForm(Dform);
	}
	catch(std::exception &e){
		e.what();
	}
	try{
		Bureaucrat bur1("bur3", 1);
		bur1.signForm(Dform);
		bur1.executeForm(Dform);
	}
	catch(std::exception &e){
		e.what();
	}
	RobotomyRequestForm rform("me", "frorm");
	try{
		Bureaucrat bur4("bur4", 1);
		bur4.signForm(rform);
		bur4.executeForm(rform);
	}
	catch(std::exception &e){
		e.what();
	}
	PresidentialPardonForm Pform("bur4", "pform");
	try{
		Bureaucrat bur4("bur4", 1);
		bur4.signForm(Pform);
		bur4.executeForm(Pform);
	}
	catch(std::exception &e){
		e.what();
	}
	return 0;
}
