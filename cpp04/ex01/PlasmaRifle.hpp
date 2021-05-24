/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:37:18 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 22:27:53 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE
#define PLASMARIFLE
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle(/* args */);
	PlasmaRifle(PlasmaRifle const & toCopy);
	~PlasmaRifle();
	PlasmaRifle & operator=(PlasmaRifle const & toCopy);
	virtual void attack() const ;
};

#endif // !1