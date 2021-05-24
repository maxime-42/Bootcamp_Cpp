#include <cstdlib>
#include <random>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#define YELLOW "\e[33m"
#define CYN "\e[0;36m"
#define NC "\e[0m"

struct Data
{
	std::string str1;
	int nb;
	std::string str2;
};

void	printPtrVoid(void *ptrVoid)
{
	Data 	*ptrData = reinterpret_cast<Data *>(ptrData);
	std::cout << "\n************************printPtrVoid************************"<< std::endl;
	std::cout << YELLOW << "random str 1    : " << ptrData->str1 << std::endl;
	std::cout << "random number   : " << ptrData->nb << std::endl;
	std::cout << "random str 2    : " << ptrData->str2 << std::endl;
}

void	printPtrData(Data *ptrData)
{
	std::cout << NC << "\n\n************************printPtrData************************"<< std::endl;
	std::cout << CYN << "random str 1    : " << ptrData->str1 << std::endl;
	std::cout << "random number   : " << ptrData->nb << std::endl;
	std::cout << "random str 2    : " << ptrData->str2 << std::endl;
}

void random_string(std::string & toFille)
{
	int index = 0;
	const std::string charset("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	for (size_t i = 0; i < charset.length() ; i++)
	{
		index = rand() % charset.length() + 1;
		toFille.append(1, charset[index]);
	}
}

void *serialize(void)
{
	Data  *Data = new(struct Data);
	random_string(Data->str1);
	random_string(Data->str2);
	Data->nb = rand();
	return (Data);
}

Data * deserialize(void * raw)
{
	// Data 	*ptrData = static_cast<struct s_Data *>(Data);
	// Data 	*ptrData = dynamic_cast< Data *>(Data);
	Data 	*ptrData = reinterpret_cast<Data *>(raw);
	return (ptrData);
}

int main() 
{
	srand((unsigned) time(0));
	void	*ptrVoid = serialize();
	printPtrVoid(ptrVoid);
	Data 	*ptrData = deserialize(ptrVoid);
	printPtrData(ptrData);
	delete ptrData;
}