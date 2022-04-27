#include "easyfind.hpp"
#include <vector>
#include <string>

int	main()
{
	int myints[] = {0, 16,2,77,29};
  	std::vector<int> vec1 (myints, myints + sizeof(myints) / sizeof(int) );
	std::vector<int>::const_iterator iter = easyfind(vec1, 29);
	std::cout << *iter << '\n';
	try
	{
		std::vector<int>::const_iterator iter = easyfind(vec1, 185);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::vector<int> vec2;
	try
	{
		std::vector<int>::const_iterator iter = easyfind(vec2, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return 0;
}