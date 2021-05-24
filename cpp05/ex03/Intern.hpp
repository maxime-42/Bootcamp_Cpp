/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:40:12 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/20 17:34:21 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN
# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	Intern(/* args */);
	~Intern();
	Intern( Intern const & toCopy );
	Intern &operator=( Intern const & toCopy );
	Form	*makeForm(std::string name, std::string target);
	Form	*ptrRobot(std::string target);
	Form	*ptrPrsident(std::string target);
	Form	*ptrShrubbery(std::string target);
};

#endif // !INThpp
#define INTERN
