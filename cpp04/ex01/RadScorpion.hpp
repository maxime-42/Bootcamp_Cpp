/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:26:15 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 11:32:14 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION
#define RADSCORPION

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
	/* data */
public:
	RadScorpion(/* args */);
	~RadScorpion();
	RadScorpion & operator=(RadScorpion const & toCopy);
	RadScorpion(RadScorpion const & toCopy);
	void takeDamage(int domage);
};

#endif // !1