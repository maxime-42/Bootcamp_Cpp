/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:32:26 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/29 20:22:17 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define MAGENTA "\e[35m"
#define BLUE "\e[34m"
#define BG_GRN "\e[42m"
#define BG_BLUE "\e[46m"
#define BG_GRAY "\e[47m"
#define BG_MAGENTA "\e[45m"
#define FG_BLACK "\e[30m"
#define PINK "\e[38;5;198"

#include <array>
# include <exception>

class NotFoundException: public std::exception
{
	public:
		NotFoundException(){}
		virtual const char *what() const throw(){ return ("Element not found"); }
};

template <typename T>
void easyfind(T &data, int elem)
{
   typename T::iterator it = std::find(data.begin(), data.end(), elem);

	if (it != data.end()) 
	{
		std::cout << GRN << "Congratulation, element has been found" << NC << std::endl;
	}
	else
		throw NotFoundException();
	(void)it;
}

#endif // !