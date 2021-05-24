#include "Array.hpp"
#define YELLOW "\e[33m"
#define NC "\e[0m"

void testIntArray()
{
	try
	{
		std::cout << "****Array int***" << std::endl;
		unsigned int n = 5;
		Array<int>  tab1(n);
		tab1[0] = 10;
		tab1[1] = 20;
		tab1[2] = 30;
		tab1[3] = 40;
		tab1[4] = 50;
		tab1.printArray();
		std::cout << "****************" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testFloatArray()
{
	try
	{
		std::cout << "****Array float  ***" << std::endl;
		unsigned int n = 5;
		Array<float>  tab1(n);
		tab1[0] = 63.876;
		tab1[1] = 123.876;
		tab1[2] = 34.78;
		tab1[3] = 406.03;
		tab1[4] = 6.257;

		tab1.printArray();
		std::cout << "****************" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}



void testString()
{
	try
	{
		std::cout << "****Array string***" << std::endl;
		unsigned int n = 5;
		Array<std::string>  tab1(n);
		tab1[0] = "hello";
		tab1[1] = "lenox";
		tab1[2] = "what happen";
		tab1[3] = "you look so happy ?";
		tab1[4] = "tell me you secret";
		tab1.printArray();
		std::cout << "****************" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void testArrayChar()
{
	try
	{
		std::cout << "****Array Char***" << std::endl;
		unsigned int n = 5;
		Array<std::string>  tab1(n);
		tab1[0] = 'A';
		tab1[1] = 'B';
		tab1[2] = 'C';
		tab1[3] = 'D';
		tab1[4] = 'E';
		tab1.printArray();
		std::cout << "****************" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	std::string test;
	do
    {
		std::cout << "\nEnter 1 to test Array int" << std::endl;
		std::cout << "Enter 2 to test Array float" << std::endl;
		std::cout << "Enter 3 to test Array string " << std::endl;
		std::cout << "Enter 4 to test Array char\n-> ";
		getline(std::cin, test);
		if (test == "1")
			testIntArray();
		else if (test == "2")
			testFloatArray();
		else if (test == "3")
			testString();
		else if (test == "4")
			testArrayChar();
		else 
			std::cout << YELLOW << "I don't understand you choice, try again please" << NC << std::endl;
        } while (true);
	return (0);
}