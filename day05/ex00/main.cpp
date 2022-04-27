#include "bureaucrat.hpp"

int main()
{
	try{
		std::cout << "try create bureaucrat " << "a\n";
		Bureaucrat a("a", 0);
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << "try create bureaucrat " << "b\n";
		Bureaucrat b("b", 151);
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << "try create bureaucrat " << "c\n";
		Bureaucrat c("c", 149);
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "create bureaucrat " << "d\n";
	Bureaucrat d("d", 149);
	std::cout << d << "\n";
	try{
		std::cout << "decrement Grade " << "d\n";
		d.decrementGrade();
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "d grade == " << d.getGrade() << std::endl;
	try{
		std::cout << "decrement Grade " << "d\n";
		d.decrementGrade();
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "create bureaucrat " << "f\n";
	Bureaucrat f("f", 1);
	std::cout << f << "\n";
	std::cout << "f grade == " << d.getGrade() << std::endl;
	try{
		std::cout << "increment Grade " << "f\n";
		d.decrementGrade();
	}
	catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "f grade == " << d.getGrade() << std::endl;
	return 0;
}
