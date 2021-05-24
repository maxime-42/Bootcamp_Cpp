/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:05:12 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 18:00:29 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
	Weapon();
public:
	Weapon(std::string type);
	~Weapon();
	std::string const	&getType();
	void setType(std::string type);

};



#endif

