#include "easyfind.hpp"

int			getnb(void)
{
	int 		nb;
	std::cout  << std::endl;
	do
	{
		std::cout << "Enter number do you want to find\n\t➜ ";
		std::cin >> nb;
		if (!(std::cin.good()))
		{
			std::cout << RED "\nOnly number are accpte \n\t➜ ";
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		else
			break;
	} while (true);
	return (nb);
}

void testArray()
{
	try
	{
		std::array<int, 4> arr = { 2, 4, 6, 8 };
		std::cout << "\n********array********" << std::endl;

		for (size_t i = 0; i < arr.size(); i++)
		{
			std::cout << arr[i] << " " ;
		}
		
		int toFind = getnb();
		easyfind(arr, toFind);
	}
	catch(NotFoundException &e)
	{
		std::cerr << YELLOW << e.what() <<  NC << '\n';
	}
}

void testVector()
{
	try
	{
		std::vector<int> vect;
		vect.push_back(10);
		vect.push_back(20);
		vect.push_back(30);
		vect.push_back(40);
		vect.push_back(50);
		std::cout << "\n********Vector********" << std::endl;
		for (size_t i = 0; i < vect.size(); i++)
		{
			std::cout << vect[i] << " " ;
		}
		int toFind = getnb();
		easyfind(vect, toFind);
	}
	catch(NotFoundException &e)
	{
		std::cerr << YELLOW << e.what() <<  NC << '\n';
	}
}

void testList()
{
	try
	{
		std::list<int> lst;
		lst.push_back(3);
		lst.push_back(7);
		lst.push_back(9);
		lst.push_back(11);
		lst.push_back(13);
		std::list<int>::iterator it;
		std::cout << "\n********List********" << std::endl;
		for (it = lst.begin(); it != lst.end(); it++)
		{
			std::cout << *it << " ";
		}
		int toFind = getnb();
		easyfind(lst, toFind);
	}
	catch(NotFoundException &e)
	{
		std::cerr << YELLOW << e.what() << NC << '\n';
	}
}

int main(void)
{
	std::string test;
	do
	{
		std::cout << "\nEnter 1 to test Array" << std::endl;
		std::cout << "Enter 2 to test List" << std::endl;
		std::cout << "Enter 3 to test Vector \n\t➜ ";
		getline(std::cin, test);
		if (test == "1")
			testArray();
		else if (test == "2")
			testList();
		else if (test == "3")
			testVector();
		std::cin.clear();
		std::cin.ignore(100, '\n');
		
	}while (true);
	return (0);	
}


