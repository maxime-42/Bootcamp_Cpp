#include "iter.hpp"

int main(int argc, char const *argv[])
{
	std::cout << "*******************array char const *argv[] *******************" << std::endl;
	iter(argv, argc, printArray);
	std::cout << "*******************array string*******************" << std::endl;
	std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	iter(cars, 4, printArray);
	std::cout << "*******************array int*******************" << std::endl;
	int myNum[4] = {10, 20, 30, 50};
	iter(myNum, 4, printArray);
	std::cout << "*******************array float*******************" << std::endl;
	float arrFloat[5] = {10.2f, 754.134f, 9876.68f, 143.49878f, 648.354f};
	iter(arrFloat, 5, printArray);

	std::cout << "*******************array char*******************" << std::endl;
	char myword[] = "Hello"; 
	iter(myword, 5, printArray);
	(void)argc;
	(void)argv;
	return (0);
}
