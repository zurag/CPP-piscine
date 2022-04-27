#include <iostream>
#include <string>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strRef = str;

	std::cout <<  "memory address of the string variable == " << &str << std::endl;
	std::cout <<  "The memory address held by stringPTR == " << &strPTR << std::endl;
	std::cout <<  "The memory address held by stringREF == " << &strRef << "\n" << std::endl;

	std::cout <<  "The value of the string variable == " << str << std::endl;
	std::cout <<  "The value pointed to by stringPTR == " << *strPTR << std::endl;
	std::cout <<  "The value pointed to by stringREF == " << strRef << std::endl;
	return (0);
}