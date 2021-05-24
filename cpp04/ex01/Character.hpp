/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:48:54 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/16 18:24:43 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
#define CHARACTER
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	name;
	int			ap;
	AWeapon		*aweapon;

	//[...]
public:
	Character();
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName() const;
	int  getAp() const;
	Character(Character const & toCopy);
	AWeapon * getAweapon()const;
	Character & operator=(Character const & toCopy);

};
	std::ostream & operator<<(std::ostream & output, Character const & character);

#endif // !1