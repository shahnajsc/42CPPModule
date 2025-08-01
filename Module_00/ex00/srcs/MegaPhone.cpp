/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:29:54 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/28 10:09:43 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	int i;
	std::string str;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (i > 1)
			str += " ";
		str += argv[i];
	}
	for (std::string::size_type i = 0; i <str.length(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
	std::cout <<  str << std::endl;
	return (0);
}
