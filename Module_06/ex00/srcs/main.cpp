/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/24 12:13:44 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{

	if (argc != 2) {
		std::cout << RED << "Wrong parameter(s) provided for conversion!" << RESET << std::endl;
		return (1);
	}

	std::string	inputStr = argv[1];
	ScalarConverter::convert(inputStr);
	return (0);
}
