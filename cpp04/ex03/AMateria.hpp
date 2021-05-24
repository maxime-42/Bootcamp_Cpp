/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:37:15 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 14:06:20 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string type;
	unsigned int _xp;
public:
	// AMateria(/* args */);
	AMateria(std::string const & type);
	// [...]
	virtual ~AMateria();
	std::string const & getType() const; 
	unsigned int getXP() const;
	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria(AMateria const & toCopy);
	AMateria	&  operator=(AMateria const &toCopy);
		
};

#endif // !1