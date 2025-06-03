/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:45:04 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/03 15:32:40 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "Level: DEBUG" << std::endl;
	harl.complain("DEBUG");
		std::cout << "Level: Debug" << std::endl;
	harl.complain("Debug");

	std::cout << "Level: INVALID" << std::endl;
	harl.complain(" ");
}
