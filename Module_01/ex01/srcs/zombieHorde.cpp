/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:55:57 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 15:45:12 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;
	i = 0;

	Zombie* horde = new Zombie[N];
	if (horde == nullptr)
	{
		std::cerr << "Error: Memory allocation failed for Horde of Zombies" << std::endl;
		return (nullptr);
	}
	for (i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	std::cout << "Total " << N << " zombies created" << std::endl << std::endl;
	return (horde);
}
