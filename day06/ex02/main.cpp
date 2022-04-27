#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <exception>

class Base
{
public:
	virtual ~Base();
};

Base::~Base()
{
}

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base *generate(void)
{
	srand(std::time(NULL));
	int i = rand() % 3;
	A *a;
	B *b;
	C *c;

	switch (i)
	{
	case 0:
		std::cout << "Generate A class\n";
		a = new (A);
		return a;
		break;
	case 1:
		std::cout << "Generate B class\n";
		b = new (B);
		return b;
		break;
	case 2:
		std::cout << "Generate C class\n";
		c = new (C);
		return c;
		break;
	}
	return NULL;
}

void identify(Base& p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast <A&>(p);
		std::cout << "indetify A class\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		tmp = dynamic_cast <B&>(p);
		std::cout << "indetify B class\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		tmp = dynamic_cast <C&>(p);
		std::cout << "indetify C class\n";
	}
	catch(const std::exception& e)
	{
	}
}

void identify(Base* p)
{

	if (dynamic_cast <A*>(p))
		std::cout << "indetify A class\n";
	else if (dynamic_cast <B*>(p))
		std::cout << "indetify B class\n";
	else if (dynamic_cast <C*>(p))
		std::cout << "indetify C class\n";
}

int main()
{
	Base *randBase;
	randBase = generate();
	identify(randBase);
	identify(*randBase);
	delete randBase;
	return 0;
}
