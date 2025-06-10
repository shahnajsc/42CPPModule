/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:25:59 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 14:04:02 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	try
	{
		Zombie *newZom = new Zombie(name);
		return (newZom);
	}
	catch(const std::bad_alloc &excep)
	{
		std::cerr << excep.what() << std::endl;
		return (nullptr);
	}
}
