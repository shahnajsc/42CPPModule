/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:04 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/11 10:28:58 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "Level: INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "Level: ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << "Level: INVALID" << std::endl;
	harl.complain("abcdef");

	std::string level;
	std::cout << std::endl << "Enter Level (DEBUG, INFO, WARNING, ERROR)" << std::endl;
	std::getline(std::cin, level);
	std::cout << std::endl;
	harl.complain(level);
}
