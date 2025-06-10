/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:04 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 18:18:05 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	Harl harl;

	std::string level;
	std::cout << "Enter Level (DEBUG, INFO, WARNING, ERROR)" << std::endl;
	std::getline(std::cin, level);
	std::cout << std::endl;
	harl.complain(level);
}
