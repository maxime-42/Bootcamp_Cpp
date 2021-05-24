/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:06:27 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/23 15:58:38 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	std::string target;
	Form* ptrForm = NULL;
	
	try
	{
		std::cout << GRN << "\n**********TEST 1 : ATTEMPT TO CREATE A BUREAUCRAT **********" << std::endl;
        std::cout << "Entrer a random name for the the futur bureaude \n\t➜ ";
		std::string name = enterName();
        std::cout << "Enter the grade for the next one bureaude \n\t➜" ;
        int grade = getnb();
        Bureaucrat bureaucrat(name, grade);
        std::cout << bureaucrat << std::endl;
		/***************************************************************************************************************/
		
		std::cout << CYN << "\n**********TEST 2 : ATTEMPT TO CREATE A FORM **********" << std::endl;
		std::cout << "Chose Form do you want test :" << std::endl;
		std::cout << "Enter 1 : ShrubberyCreationForm" << std::endl;
		std::cout << "Enter 2 : RobotomyRequestForm" << std::endl;
		std::cout << "Enter 3 : PresidentialPardonForm\n\t➜" ;
		int nb = getnb();
		Intern someRandomIntern;
		std::cout << CYN << "Enter a random target for the Form\n\t➜  ";
		std::string target = enterName();	
		if (nb == 1)
			ptrForm = someRandomIntern.makeForm("shrubbery creation", target);
		else if (nb == 2)
			ptrForm = someRandomIntern.makeForm("robotomy request", target);
		else if (nb == 3)
			ptrForm = someRandomIntern.makeForm("presidential pardon", target);
		std::cout << *ptrForm << std::endl;
		
		/***************************************************************************************************************/

		std::cout << MAGENTA << "\n**********TEST 3 : ATTEMPT TO Signe A FORM **********" << std::endl;
        bureaucrat.signForm(*ptrForm);
		std::cout << BLUE << "\n**********TEST 4 : ATTEMPT TO EXECUTE A FORM **********" << std::endl;
        bureaucrat.executeForm(*ptrForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (ptrForm)
		delete ptrForm;
	return (0);
}