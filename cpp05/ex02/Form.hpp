/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:51:37 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 20:08:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	std::string const _name;
	int const _gradeSign;
	int	const _gradeExec;
	bool _boolSigned;
	
public:
	Form();
	virtual ~Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(Form const & toCopy);
	Form & operator=(Form const & toCopy);
	std::string getName()const;
	int getGradeExec()const;
	int getGradeSign()const;
	bool getBoolSigned()const;
	void beSigned(Bureaucrat & bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char  * what() const throw()
		{
			return ("Grade is to high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char  * what() const throw()
		{
			return ("Grade is to low");
		}
	};
	
};

std::ostream & operator<<(std::ostream & output, Form const & form);


#endif