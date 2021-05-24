/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <mkayumba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:23:30 by mkayumba          #+#    #+#             */
/*   Updated: 2021/04/10 22:25:03 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#define RED "\e[0;31m"

bool	verrifArgument(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout <<  RED << "ERROR missing arguments" << std::endl;
		return (false);
	}
	for (size_t i = 1; i < 4; i++)
	{
		if (std::string(argv[i]).size() == 0)
		{
			std::cout << "ERROR argument  number " << i << std::endl;
			return (false);
		}
	}
	return (true);
}

void	replacing(std::ifstream &srcFile, std::ofstream &destFile, std::string s1, std::string s2)
{
	std::string myText;
	bool	test;
	int		index;
    while (std::getline(srcFile, myText))
	{
		test = true;
		while (test)
		{
			index = myText.find(s1);
			if (index != std::string::npos)
			{
				myText.replace(index, s1.size(), s2);
				index += 1;
			}
			else
				test = false;
		}
		destFile << myText << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	bool test = verrifArgument(argc, argv);
	if (test != false)
	{
		std::string newFile = std::string(argv[1]) + ".replace";
		std::ifstream srcFile(argv[1]);
        std::ofstream destFile(newFile.c_str());
		if (destFile && srcFile)
		{
			replacing(srcFile, destFile, argv[2], argv[3]);
			destFile.close();
			srcFile.close();
		}
		else
			std::cout << "error opening file" << std::endl;

	}
	return (0);
}
