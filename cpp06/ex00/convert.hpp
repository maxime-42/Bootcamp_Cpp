/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:31:15 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/26 19:17:11 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT
#define CONVERT
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <locale>
#include <bits/stdc++.h>

# define FLAG_SIGN	(1U <<  0U)
# define FLAG_FLOAT	(1U <<  1U)
# define FLAG_POINT	(1U <<  2U)
# define FLAG_CHAR	(1U <<  3U)
# define FLAG_NUMBER (1U <<  4U)

#include <exception>
#include <limits>

class convert
{
private:
	std::string _stringToConvert;
	int _flag;
	convert(/* args */);
public:
	~convert();
	convert(std::string toConvert);
	void 	checkIsNum(void);
	void	checkIsalpha();
	bool	charOfNum(int i);
	bool	specialCharacter(int i);
	void	toChar();
	void 	toInt();
	void	toFloat();
	void	toDouble();
	void	printConvert();
	bool	isInfinity();
	void	specialFloat();

	void	speacialDouble();


};




#endif // !1