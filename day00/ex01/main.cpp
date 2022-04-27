#include "phonebook.hpp"

int main()
{
	Phonebook phone;
	std::string command;
	while (true)
	{
		std::cout << "command: ";
		std::cin >> command;
		std::cin.clear();
		std::cin.ignore(30000, '\n');
		if (command == "add")
			phone.add();
		else if (command == "search")
			phone.search();
		else if (command == "exit")
			phone.ft_exit();
	}
	return (0);
}