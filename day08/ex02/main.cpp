#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "-----------\n";

	std::list<int> lst;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	
	std::list<int>::iterator lstIt = lst.begin();
	std::list<int>::iterator lstIte = lst.end();
	++lstIt;
	--lstIt;
	while (lstIt != lstIte)
	{
		std::cout << *lstIt << std::endl;
		++lstIt;
	}
	return 0;
}
