/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:46 by shachowd          #+#    #+#             */
/*   Updated: 2025/10/23 17:28:26 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {

	std::srand(std::time(NULL));

	switch (std::rand() % 3) {
		case 0: {
			std::cout << "Creating A class object" << std::endl;
			return new A;
		}
		case 1: {
			std::cout << "Creating B class object" << std::endl;
			return new B;
		}
		case 2: {
			std::cout << "Creating A class object" << std::endl;
			return new B;
		}
	}
	return NULL;
}



int main(void)
{
	return 0;
}
