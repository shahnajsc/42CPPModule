/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:55:52 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 15:55:20 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void Zombie::setName(std::string _name)
{
	this->name = _name;
}

void Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
 