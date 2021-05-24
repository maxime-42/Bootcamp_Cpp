
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */){}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation", 145, 137), _target(target)
{
	(void)target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & toCopy):Form("ShrubberyCreation", 145, 137)
{
	*this = toCopy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & toCopy)
{
	if (this != &toCopy)
	{
		this->_target =toCopy._target;
		Form::operator=(toCopy);
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget()
{
	return (this->_target);
}

void	ShrubberyCreationForm::action()const
{
	std::string concat = this->_target.c_str() + std::string("_shrubbery");
	char const *name = concat.c_str();
	std::ofstream file(name);
	if (file.is_open() && file.good())
	{
		file << "                             v" << std::endl;
		file << "                           vvvvv" << std::endl;
		file << "                   vvvvv^^vvvvvv^^vvvvv" << std::endl;
		file << "                 vvvvv^^vvvvv^^vv^vvvvvvv" << std::endl;
		file << "        	  vvvvvvvvv^^^^vv^^^vvvvv^^^vvvvv" << std::endl;
		file << "    	   vvvvvv^^^^^^^vvvvvvvvvv^^vvvvvvvvvvvv" << std::endl;
		file << " 	     vvvv^^^^^^vvvvv^^^^^^^v^^vvvv^^^vvvvvvvvvvv" << std::endl;
		file << "     vvvvvvvvvvvv^^^^^^^^vvv^^^^vvvvvvvvvvvvv^^^vvvvvvv" << std::endl;
		file << "   vvv^^vvvv^^vvvv^^vvvv^^vvv^^vvvv^vvvvv^vvvvvvvvvvvvvv" << std::endl;
		file << " vvvv^^vvvv^^vvvv^^vvvv^^vvv^^^v^vvvvv^vvvvvvvvvvv^^vvvvv^" << std::endl;
		file << "                        ||||;=;||||" << std::endl;
		file << "                        ||||;=;||||" << std::endl;
		file << "            	         ||||;=;||||" << std::endl;
		file << "                        //\\;=;//\\" << std::endl;
		file.close();
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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