/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:30:28 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/28 14:03:00 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
#define ITER
#include <string>
#include <iostream>

template <typename T>
void iter(T array[], int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
	{
		(*f)(array[i]);
	}
}

template <typename T>
void	printArray(T &elem)
{
	std::cout << elem << std::endl;
}
#endif // !ITER#define ITER