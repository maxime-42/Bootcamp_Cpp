/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:39:04 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 23:00:46 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST
#define POWERFIST
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	/* data */
public:
	PowerFist(/* args */);
	PowerFist(PowerFist const & toCopy);
	~PowerFist();
	PowerFist & operator=(PowerFist const & toCopy);
	virtual void attack() const ;
};

#endif // !PowerFist