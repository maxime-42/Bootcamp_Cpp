#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <time.h>

class Base
{
	public:
	virtual ~Base()	{};
};

class A : public Base
{
	~A(){};
};

class B : public Base
{
	~B(){};
};

class C : public Base
{
	~C(){};
};

Base * generate(void)
{
	Base	*ptrBase = NULL;
	int index = rand() % 3;
	if (index == 0)
		ptrBase = new (A);
	else if (index == 1)
		ptrBase = new (B);
	else if (index == 2)
		ptrBase = new (C);
	return (ptrBase);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}


void identify_from_reference(Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main(int argc, char const *argv[])
{
	srand((unsigned) time(0));
	Base *base = generate();
	std::cout << "\n****************Identify by Pointer****************" << std::endl;
	identify_from_pointer(base);
	std::cout << "\n****************Identify by Reference****************" << std::endl;
	identify_from_reference(*base);
	delete base;
	return (0);
}
