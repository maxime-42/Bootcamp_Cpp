/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:40:48 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 14:42:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator(/* args */);
	~AssaultTerminator();
	AssaultTerminator( AssaultTerminator const & toCopy);
	ISpaceMarine* clone() const ;
	void			battleCry() const;
	void			rangedAttack() const;
	void 			meleeAttack() const;
	AssaultTerminator	& operator=(AssaultTerminator const & toCopy);
};

#endif // !1