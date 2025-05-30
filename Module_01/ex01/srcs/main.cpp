/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:55:47 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/30 16:33:38 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int i;
	int N;

	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "|       Welcome To Horde of Zombies     |" << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;

	std::cout << "Enter how many Zombies you want to create: " << std::endl;
	std::cin >> N;
	std::cin.ignore();
	if (N <= 0)
	{
		std::cout << N << " is a invalid number." << std::endl;
		return (1);
	}

	Zombie* horde = zombieHorde(N, "ZomBiee");
	if (horde != NULL)
	{
		i = 0;

		for (i = 0; i < N; i++)
			horde[i].announce();
		delete[] horde;
	}
	else
		std::cout << "Zombie creation failed" << std::endl;
	return (0);
}
