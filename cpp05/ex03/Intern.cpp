/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:42:30 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/23 00:08:46 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern( Intern const & toCopy )
{
	*this = toCopy;
}

Intern &				Intern::operator=( Intern const & toCopy )
{
	(void)toCopy;
	return *this;
}

Form *Intern::ptrRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::ptrPrsident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::ptrShrubbery(std::string target)
{
	return (new ShrubberyCreationForm (target));
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form *tabPtr[3] = {this->ptrRobot(target) , this->ptrPrsident(target), this->ptrShrubbery(target)};
	std::string tabName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (tabName[i] == name)
		{
			Form *ptr = tabPtr[i];
			std::cout << "Intern creates " << ptr->getName() << std::endl;
			return (ptr);
		}
	}
	std::cout << "unknown form type" << std::endl;
	return (NULL);
}