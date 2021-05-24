/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:13:38 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 11:28:40 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
#define  CURE

#include <string>
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure(/* args */);
	~Cure();
	Cure(Cure const &toCopy);
	Cure & operator=(Cure const &toCopy);
	AMateria * clone()const;
	virtual void use(ICharacter& character);
};

#endif // !1