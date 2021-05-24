/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:43:25 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 12:02:33 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE
#define TACTICALMARINE
#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine(/* args */);
	~TacticalMarine();
	TacticalMarine( TacticalMarine const & toCopy);
	ISpaceMarine* clone() const ;
	void			battleCry() const;
	void			rangedAttack() const;
	void 			meleeAttack() const;
	TacticalMarine	& operator=(TacticalMarine const & toCopy);
};

#endif // !1