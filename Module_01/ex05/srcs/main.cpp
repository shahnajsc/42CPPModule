/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:04 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 18:13:58 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	Harl harl;
	std::cout << "Level: DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Level: INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "Level: WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "Level: ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << "Level: INVALID" << std::endl;
	harl.complain("abcdef");

	std::string level;
	std::cout << "Would you like to try? Enter Level (DEBUG, INFO, WARNING, ERROR)" << std::endl;
	std::getline(std::cin, level);
	std::cout << std::endl;
	harl.complain(level);
}
