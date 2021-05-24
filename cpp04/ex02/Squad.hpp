/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:13:36 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/17 13:47:20 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD
#define SQUAD
#define EXISTING 1
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad	: public ISquad
{
private:
	typedef	struct s_list
	{
		ISpaceMarine *unit;
		struct s_list *next;
	}		t_list;
	int		count;
	t_list	*unit;
	int	checkUnit(ISpaceMarine *toCheck);
public:
	Squad(/* args */);
	~Squad();
	Squad( const Squad & src );
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine *new_member);
	void		addBack(ISpaceMarine *toCheck);
	void 	ft_lstClear();
	Squad & operator=(Squad const & toCopy);
};

#endif // !SQUAD

