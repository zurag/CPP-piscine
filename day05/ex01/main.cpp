#include "Form.hpp"

int main()
{
	Form a_form("a", 10, 11);
	Bureaucrat bur_a("a", 5);
	std::cout << a_form << "\n";
	std::cout << bur_a << "\n";
	bur_a.signForm(a_form);
	std::cout << "\n";
	try
	{
		Form b_form("B", 151, 11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form C_form("C", -1, 11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form d_form("D", 12, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form d_form("D", 12, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form d_form("D", 1, 10);
	bur_a.signForm(d_form);
	Form s_form("S", 10, 1);
	bur_a.signForm(s_form);
	return 0;
}