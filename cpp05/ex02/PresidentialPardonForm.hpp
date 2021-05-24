/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 23:24:37 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/22 23:25:25 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
#include <sstream>
class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(/* args */);
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & toCopy);
	std::string getTarget();
	PresidentialPardonForm (PresidentialPardonForm const & toCopy);
	virtual void execute(Bureaucrat const & executor) const;
	void	action()const;
};

#endif // !1