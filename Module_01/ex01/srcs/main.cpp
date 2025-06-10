/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:55:47 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 16:48:42 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

bool horde_test(int N, const std::string _name);

int main(void)
{
	int N;

	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "|       Welcome To Horde of Zombies     |" << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;

	if (!horde_test(4, "ZomBeeee"))
	{
		return (1);
	}

	std::cout << std::endl << "Try Your Zombie Horde" << std::endl;
	std::cout << "Enter how many Zombies you want to create: " << std::endl;
	std::cin >> N;
	std::cin.ignore();
	if (N <= 0)
	{
		std::cerr << " Error: Invalid number." << std::endl;
		return (1);
	}

	if (!horde_test(N, "ZomBeeee"))
	{
		return (1);
	}
	return (0);
}

bool horde_test(int N, const std::string _name)
{
	int i;

	i = 0;
	Zombie* horde1 = zombieHorde(N, _name);
	if (horde1 != nullptr)
	{
		i = 0;

		for (i = 0; i < N; i++)
			horde1[i].announce();
		delete[] horde1;
		std::cout << std::endl <<"Horde of Zombies Deleted." << std::endl;
	}
	else
	{
		return (false);
	}
	return (true);
}
