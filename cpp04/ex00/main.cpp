/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:18:38 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 17:40:50 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Thief.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim *tiwa = new Thief("Tiwa");
	std::cout << robert << jim << joe << *tiwa;
	robert.polymorph(jim);
	robert.polymorph(joe);
	delete tiwa;
	return (0);
}