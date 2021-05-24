/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 23:26:45 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 23:29:27 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */){}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("ShrubberyCreation", 25, 5), _target(target)
{
	(void)target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & toCopy):Form("ShrubberyCreation", 25, 5)
{
	*this = toCopy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & toCopy)
{
	if (this != &toCopy)
	{
		this->_target =toCopy._target;
		Form::operator=(toCopy);
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget()
{
	return (this->_target);
}

void	PresidentialPardonForm::action()const
{
	std::cout << "<" << this->_target << ">has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getBoolSigned() == true)
	{
		if (executor.getGrade() <= this->getGradeExec())
		{
			this->action();
		}
		else
			throw Form::GradeTooHighException();
	}
}