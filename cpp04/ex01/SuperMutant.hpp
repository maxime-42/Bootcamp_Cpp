/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:53:19 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 11:25:45 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT
#define SUPERMUTANT
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	/* data */
public:
	SuperMutant(/* args */);
	~SuperMutant();
	SuperMutant & operator=(SuperMutant const & toCopy);
	SuperMutant(SuperMutant const & toCopy);
	void takeDamage(int domage);
};

#endif // !