/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:11:59 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/28 12:10:05 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER
#define WHATEVER
#include <iostream>
#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
	return ((a > b) ? b : a);
}

template <typename T>
T max(T &a, T &b)
{
	return ((a < b) ? b : a);
}
#endif