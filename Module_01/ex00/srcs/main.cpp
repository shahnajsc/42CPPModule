/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:39:54 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/28 17:06:15 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "|       Welcome To ZombieLand     |" << std::endl;
	std::cout << "-----------------------------------" << std::endl << std::endl;

	std::cout << "STACK MEMORY TEST:" << std::endl;
	randomChump("ElonMusk");

	std::cout << std::endl << "HEAP MEMORY TEST:" << std::endl;
	Zombie *heapZom = newZombie("McDonaldTrump");
	if (heapZom != NULL)
	{
		heapZom->announce();
		delete heapZom;
	}
	else
		std::cout << "Heap Zombie creation failed" << std::endl;
	return (0);
}
