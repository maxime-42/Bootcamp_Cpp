/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:45:45 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 14:55:24 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	// delete vlc;
	std::cout << "\n\n*******new test*******" << std::endl;
	ISpaceMarine* steeve = new TacticalMarine;
	ISpaceMarine* lenox = new AssaultTerminator;
	ISpaceMarine* steff = new TacticalMarine;
	ISpaceMarine* jack = new AssaultTerminator;	
	// ISquad* vlc = new Squad;
	vlc->push(steeve);
	vlc->push(lenox);
	vlc->push(steff);
	vlc->push(jack);
		for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
