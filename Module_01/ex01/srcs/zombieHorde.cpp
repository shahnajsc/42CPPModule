/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:55:57 by shachowd          #+#    #+#             */
/*   Updated: 2025/05/30 15:55:58 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;
	i = 0;

	Zombie* horde = new Zombie[N];
	if (horde == NULL)
		return (NULL);
	for (i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
