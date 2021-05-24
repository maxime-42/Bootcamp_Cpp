/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:47:26 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 14:45:47 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(/* args */)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & toCopy)
{
	(void)toCopy;
}

AssaultTerminator 	& AssaultTerminator::operator=(AssaultTerminator const & toCopy)
{
	(void)toCopy;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	std::cout << "AssaultTerminator clone" << std::endl;
	ISpaceMarine *the_clone = new AssaultTerminator(*this);
	return (the_clone);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void 			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
