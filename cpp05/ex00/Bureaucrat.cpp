#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */){}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & toCopy)
{
	*this = toCopy;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & toCopy)
{
	if (this != &toCopy)
	{
		this->_grade = toCopy._grade;
	}
	return (*this);
}

int Bureaucrat::getGrade()const
{
	return (this->_grade);
}

std::string Bureaucrat::getName()const
{
	return (this->_name);
}

void Bureaucrat::incrementeGrade(int n)
{
	this->_grade -= n;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::decrementGrade(int n)
{
	this->_grade += n;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream & operator<<(std::ostream & output, Bureaucrat const & bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (output);
}