/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:20:51 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 16:09:31 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
#define HUMAN
#include "Brain.hpp"

class Brain;
class Human
{
private:
	Brain const brain;	
public:
	Human(/* args */);
	~Human();
	Brain	const &getBrain()const;
	std::string	 identify()const;

};


#endif // !HUMAN#define HUMAN


