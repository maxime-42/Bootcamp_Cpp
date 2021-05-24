/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:40:56 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/15 11:31:07 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(/* args */);
	~FragTrap();
	FragTrap(std::string  name);
	FragTrap(FragTrap const & toCopy);
	FragTrap			& operator=(FragTrap const & toCopy);
	void		vaulthunter_dot_exe(std::string const & target);


};


#endif // !