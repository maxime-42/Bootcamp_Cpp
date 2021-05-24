/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:06:27 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/23 16:01:21 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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


int			getnb(void)
{
	int 		nb;
	do
	{
		std::cin >> nb;
		if (!(std::cin.good()))
		{
			std::cout << RED "\nthe grade have to be a number\n\t➜ ";
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		else
			break;
	} while (true);
	return (nb);
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

int main()
{
	int gradeSigne;
	int gradeExec;
	std::string name;
	std::cout << YELLOW << "\nWARNING : <REMEMBER, GRADE 1 IS HIGHEST, 150 IS LOWEST, SO INCREMENTING A GRADE 3 GIVES YOU A GRADE 2...>" << std::endl;

	try
	{
		std::cout << GRN << "\n**********TEST 1 : ATTEMPT TO CREATE A BUREAUCRAT **********" << std::endl;
		std::cout << "Entrer a random name for the the futur bureaude \n\t➜ ";
		name = enterName();
		std::cout << "Enter the grade for the next one bureaude \n\t➜" ;
		gradeSigne = getnb();
		Bureaucrat bureaucrat(name, gradeSigne);
		std::cout << bureaucrat << std::endl;

		std::cout << MAGENTA << "\n**********TEST 2 : ATTEMPT TO CREATE A FORM **********" << std::endl;
		std::cout << YELLOW << "\nWARNING : <THE FORM HAVE 2 GRADE, ONE GRADE TO SIGN AND OTHER GRADE TO EXECUTE>\n" << std::endl;
		std::cout << MAGENTA << "Entrer a random name for the next one Form \n\t➜ ";
		name = enterName();
		std::cout << "Enter the grade to sign for the form \n\t➜";
		gradeSigne = getnb();
		std::cout << MAGENTA << "Enter the grade to execute for the form \n\t➜" ;
		gradeExec = getnb();
		Form form(name, gradeSigne, gradeExec);
		std::cout << form << std::endl;

		std::cout << BLUE << "\n**********TEST 3 : ATTEMPT TO SIGN A FORM **********" << std::endl;
		bureaucrat.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// (void)gradeExec;
	return (0);
}