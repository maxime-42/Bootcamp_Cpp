/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:00:46 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 16:07:13 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	// Brain brain;
	// Brain *ptr = &brain;
	// brain.identify();	
	// std::cout << "ptr 	:  " << ptr << std::endl;
	Human	 bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
