/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:17:15 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 17:17:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT
#define MIN 150
#define MAX 1

#include <exception>
#include <stdexcept>
#include "Form.hpp"
#include <string>
#include <iostream>
class Form;
class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat(/* args */);
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & toCopy);
	Bureaucrat &  operator=(Bureaucrat const & toCopy);
	int getGrade()const;
	std::string getName()const;
	void incrementeGrade(int n);
	void decrementGrade(int n);
	void signForm(Form & form);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() 
		{
			return ("Grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() 
		{
			return ("Grade too low");
		}
	};
};
std::ostream & operator<<(std::ostream & output, Bureaucrat const & bureaucrat);

#endif