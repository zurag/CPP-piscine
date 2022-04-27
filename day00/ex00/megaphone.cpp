#include <iostream>
#include <string>
#include <cwctype>

void print_apper_case(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		std::cout << (char) towupper(str[i]);
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			print_apper_case(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
