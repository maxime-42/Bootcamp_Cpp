/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:54:10 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 21:52:43 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
#include <sstream>
class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(/* args */);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & toCopy);
	std::string getTarget();
	ShrubberyCreationForm (ShrubberyCreationForm const & toCopy);
	virtual void execute(Bureaucrat const & executor) const;
	void	action()const;
};

#endif // !1