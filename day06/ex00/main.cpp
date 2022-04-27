#include "Conver.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	try
	{
		Conver onv(argv[1]);
		std:: cout << onv;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalid value" << '\n';
	}
	return 0;
}
