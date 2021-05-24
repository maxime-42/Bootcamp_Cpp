/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:38:30 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 13:29:53 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE 
#define  ICE

#include <string>
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(/* args */);
	~Ice();
	Ice(Ice const &toCopy);
	Ice & operator=(Ice const &toCopy);
	AMateria * clone()const;
	virtual void use(ICharacter& target);
};




#endif // !1