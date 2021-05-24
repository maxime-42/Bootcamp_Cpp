/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:28:55 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/28 12:39:25 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#define BLUE "\e[34m"
#define BG_GRN "\e[42m"
#define BG_BLUE "\e[46m"
#define BG_GRAY "\e[47m"
#define BG_MAGENTA "\e[45m"
#define FG_BLACK "\e[30m"
#define PINK "\e[38;5;198"

void testSwap(void)
{
	std::cout << "******************************* Swap ********************************" << std::endl;
	int integer1 = 42;
	int integer2 = 21;
	std::cout << GRN << "Before swapping :\n\tinteger1 = " << integer1 << " ; integer2 = " << integer2 << std::endl;
	swap(integer1, integer2);
	std::cout << "After swapping :\n\tinteger1 = " << integer1 << " ; integer2 = " << integer2 << std::endl;
	
	float floating1 = 56.67;
	float floating2 = 12.86;
	std::cout << RED "\nBefore swapping :\n\tfloating1 = " << floating1 << " ; floating2 = " << floating2 << std::endl;
	swap(floating1, floating2);
	std::cout << RED << "after swapping :\n\tfloating1 = " << floating1 << " ; floating2 = " << floating2 << std::endl;

	std::string str1 = "papa";
	std::string str2 = "maman";
	std::cout << YELLOW << "\nBefore swapping :\n\tstr1 = " << str1 << " ; str2 = " << str2 << std::endl;
	swap(str1, str2);
	std::cout << YELLOW << "\after swapping :\n\tstr1 = " << str1 << " ; str2 = " << str2 << std::endl;
	
	char letter1 = 'A';
	char letter2 = 'B';
	std::cout << CYN << "\nBefore swapping :\n\tletter1 = " << letter1 << " ; letter2 = " << letter2 << std::endl;
	swap(letter1, letter2);
	std::cout << CYN << "\after swapping :\n\tletter1 = " << letter1 << " ; letter2 = " << letter2 << std::endl;
	std::cout << NC << "\n" << std::endl;
}

void testMin()
{
	std::cout << "******************************* Min ********************************" << std::endl;

	int integer1 = 42;
	int integer2 = 21;
	std::cout << CYN << integer1 << " and " << integer2 << " min = " << min(integer1, integer2) << "\n" << std::endl;
	
	float floating1 = 56.67;
	float floating2 = 12.86;
	std::cout << GRN << floating1 << " and " << floating2 << " min = " << min(floating1, floating2) << "\n" << std::endl;
	
	std::string str1 = "papa";
	std::string str2 = "maman";
	std::cout << MAGENTA <<  str1 << " and " << str2 << " min = " << min(str1, str2) << "\n"<< std::endl;
	
	char letter1 = 'A';
	char letter2 = 'B';
	std::cout << YELLOW << letter1 << " and " << letter2 << " min = " << min(letter1, letter2) << std::endl;
	std::cout << NC << "\n" << std::endl;

}


void testMax()
{
	std::cout << "******************************* Max ********************************" << std::endl;

	int integer1 = 42;
	int integer2 = 21;
	std::cout << BLUE << integer1 << " and " << integer2 << " max = " << max(integer1, integer2) << "\n" << std::endl;
	
	float floating1 = 56.67;
	float floating2 = 12.86;
	std::cout << GRN << floating1 << " and " << floating2 << " max = " << max(floating1, floating2) << "\n" << std::endl;
	
	std::string str1 = "papa";
	std::string str2 = "maman";
	std::cout << CYN << str1 << " and " << str2 << " max = " << max(str1, str2) << "\n"<< std::endl;
	
	char letter1 = 'A';
	char letter2 = 'B';
	std::cout << MAGENTA << letter1 << " and " << letter2 << " max = " << max(letter1, letter2) << std::endl;
	std::cout << NC << "\n" << std::endl;

}

std::string enterName()
{
	std::string name;
	do
	{
		getline(std::cin, name);
	}while (name.length() == 0);
	return (name);
}
int main(void)
{
	std::string test;
	do
	{
		std::cout << "Enter 1 to test Swap" << std::endl;
		std::cout << "Enter 2 to test Min" << std::endl;
		std::cout << "Enter 3 to test Max \n-> ";
		getline(std::cin, test);
		if (test == "1")
			testSwap();
		else if (test == "2")
			testMin();
		else if (test == "3")
			testMax();
		else 
			std::cout << YELLOW << "I don't understand you choice, try again please" << std::endl;
	}while (true);
	return (0);
}
