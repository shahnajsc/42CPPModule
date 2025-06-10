/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:39:54 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 14:05:13 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "|       Welcome To ZombieLand     |" << std::endl;
	std::cout << "-----------------------------------" << std::endl << std::endl;

	std::cout << "     STACK MEMORY TEST:" << std::endl;
	randomChump("STACK_ZOMBIE");

	std::cout << std::endl << "     HEAP MEMORY TEST:" << std::endl;
	Zombie *heapZom1 = newZombie("HEAP_ZOMBIE");
	if (heapZom1 != nullptr)
	{
		heapZom1->announce();
		delete heapZom1;
	}
	else
	{
		return (1);
	}

	std::cout << std::endl << "     UNNAMED ZOMBIE(stack):" << std::endl;
	Zombie zomUnnamed;
	zomUnnamed.announce();

	return (0);
}
