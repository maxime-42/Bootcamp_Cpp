/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:44:50 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 12:05:52 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(/* args */)
{
	std::cout << BLUE <<  "Tactical Marine ready for battle!" << NC << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << BLUE << "Aaargh..." << NC << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & toCopy)
{
	(void)toCopy;
}

TacticalMarine 	& TacticalMarine::operator=(TacticalMarine const & toCopy)
{
	(void)toCopy;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	std::cout << BLUE << "TacticalMarine clone" << NC << std::endl;
	
	TacticalMarine	*the_clone = new TacticalMarine(*this);
	return (the_clone);
}

void			TacticalMarine::battleCry() const
{
	std::cout << BLUE << "For the holy PLOT!" <<  NC << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout <<  BLUE << "* attacks with a bolter *" << NC << std::endl;
}

void 			TacticalMarine::meleeAttack() const
{
	std::cout << BLUE << "* attacks with a chainsword *" << NC << std::endl;
}

