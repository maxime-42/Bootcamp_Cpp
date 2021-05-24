
#include "Form.hpp"

Form::Form():_name(0),_gradeSign(0), _gradeExec(0),_boolSigned(false){}

Form::Form(std::string name, int gradeSign, int gradeExec):_name(name),_gradeSign(gradeSign), _gradeExec(gradeExec), _boolSigned(false)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	(void)_gradeExec;
	(void)_gradeSign;

}

Form::~Form(){}

Form::Form(Form const & toCopy):_name(0),_gradeSign(0), _gradeExec(0)
{
	*this = toCopy;
}

Form & Form::operator=(Form const & toCopy)
{
	if (this != &toCopy)
	{
		this->_boolSigned = toCopy._boolSigned;
	}
	return (*this);
}

std::string Form::getName()const
{
	return (this->_name);
}

int Form::getGradeExec()const
{
	return (this->_gradeExec);
}

int Form::getGradeSign()const
{
	return (this->_gradeSign);
}

bool Form::getBoolSigned()const
{
	return (this->_boolSigned);
}

std::ostream & operator<<(std::ostream & ouput, Form const & form)
{
	ouput  << "Name : " << form.getName() << " Grade to signe <" << form.getGradeSign() << "> Grade to executer <" << form.getGradeExec() << ">";
	return (ouput);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
	{
		this->_boolSigned = true;
	}
}
