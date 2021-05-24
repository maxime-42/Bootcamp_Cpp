
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "convert.hpp"

int main(int argc, char  *argv[])
{
	std::cout << "\n" << std::endl;
	try
	{
		if (argc != 2)
		{
			throw ("Wrong number argument");
		}
		convert test(argv[1]);
		std::cout << "\n" << std::endl;
	}
	catch(char const * e)
	{
		std::cerr << e << '\n';
	}
    return (0);
}