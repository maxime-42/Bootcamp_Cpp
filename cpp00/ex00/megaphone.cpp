/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:50:26 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/07 19:59:56 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int argc, const char** argv) 
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (size_t i = 1; argv[i]; i++)
	{
		for (size_t j = 0; argv[i][j]; j++)
		{
			std::putchar(toupper(argv[i][j]));
		}
	}
	std::cout << "" << std::endl;
	(void)argc;
	return (0);
}
