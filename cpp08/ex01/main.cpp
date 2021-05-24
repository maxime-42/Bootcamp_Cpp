/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 09:37:16 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/30 15:37:04 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int		getnb(void)
{
	int	nb;
	std::cout  << std::endl;
	do
	{
		std::cout << "\t➜ ";
		std::cin >> nb;
		if (!(std::cin.good()))
		{
			std::cout << RED "\nOnly number are accepte \n\t➜ " << NC;
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		else
			break;
	} while (true);
	return (nb);
}

void testn(void)
{
	try
	{

		std::cout << "**********Define size stock**********"<< std::endl;
		std::cout << "Enter size stock" << std::endl;
		unsigned int  size = getnb();
		Span test(size);
		int n ;
		while (true)
		{
			std::cout << "Fill stock by adding number  " ;
			n = getnb();
			test.addNumber(n);
			if (test.getSize() >= size && size > 1)
			{
				test.printStock();
				std::cout << "\nshortestSpan = " << test.shortestSpan() << NC << std::endl;
				std::cout << "longestSpan = " << test.longestSpan() << NC << std::endl;
				std::cout << std::endl;
			}
		}
	}
	catch(char const *e)
	{
		std::cerr << RED <<  e << NC << '\n';
		exit(0);
	}
}

void testRange()
{
	try
	{
		int n;
		std::cout << "**********Fill Range**********"<< std::endl;
		std::cout << "Enter size stock" << std::endl;
		unsigned int  size = getnb();
		Span test(size);
		std::cout << "Enter number to start range " << std::endl;
		int start = getnb();
		std::cout << "Enter number to end range  " << std::endl;
		int end = getnb();
		test.addNumber(start, end);
		while (true)
		{
			if (test.getSize() >= size && size > 1)
			{
				test.printStock();
				test.longestSpan();
				std::cout << MAGENTA << "\nshortestSpan = " << test.shortestSpan() << std::endl;
				std::cout << CYN << "longestSpan = " << test.longestSpan() << NC << std::endl;
				std::cout << std::endl;
				
			}
			std::cout << "Fill stock by adding number  " ;
			n = getnb();
			test.addNumber(n);
		}
	}
	catch(char const *e)
	{
		std::cerr << RED << e << '\n';
		exit(0);
	}
}

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "\n*********************************************************************************************" << std::endl;
	do
	{
		std::cout << MAGENTA << "Enter 1 to add number in the stock" << NC << std::endl;
		std::cout << CYN << "Enter 2 to add range numbers in the stock "  << NC << std::endl;
		int choice = getnb();
		if (choice == 1)
			testn();
		else if (choice == 2)
		{
			testRange();
			return (0);
		}
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}while (true);
	return (0);
}
