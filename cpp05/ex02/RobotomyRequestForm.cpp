/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 23:25:41 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 23:25:42 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */){}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("ShrubberyCreation", 72, 45), _target(target)
{
	(void)target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & toCopy):Form("ShrubberyCreation", 72, 45)
{
	*this = toCopy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & toCopy)
{
	if (this != &toCopy)
	{
		this->_target =toCopy._target;
		Form::operator=(toCopy);
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget()
{
	return (this->_target);
}

void	RobotomyRequestForm::action()const
{
	std::cout << "<" << this->_target << ">has been robotomized successfully 50% of the time" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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