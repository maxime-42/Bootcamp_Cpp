/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:25:36 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/18 10:59:11 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"
#include <stdlib.h>
#include<string>

class Character: public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	int	iteratorInventory;
public:
	Character(/* args */);
	~Character();
	Character(std::string name);
	std::string const & getName()const;
	Character(Character const & toCopy);
	void equip(AMateria* m);
	void unequip(int idx);
	Character & operator=(Character const &toCopy);
	virtual void use(int idx, ICharacter & target);

};


#endif // !1