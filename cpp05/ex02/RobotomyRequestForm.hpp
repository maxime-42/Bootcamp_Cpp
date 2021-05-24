/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:43:54 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 22:44:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
#include <sstream>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(/* args */);
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & toCopy);
	std::string getTarget();
	RobotomyRequestForm (RobotomyRequestForm const & toCopy);
	virtual void execute(Bureaucrat const & executor) const;
	void	action()const;
};

#endif // !1