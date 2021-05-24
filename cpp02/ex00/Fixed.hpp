/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:00:29 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/12 18:44:21 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
#define FIXED
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#include <iostream>
#include <string>

class Fixed
{
private:
	int value;
	static int const nbBits = 8;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(Fixed const &toCopy);
	Fixed & operator=(Fixed const &toCopy);
	int  getRawBits(void)const;
	void	setRawBits(int raw);

};



#endif // !FIXED
