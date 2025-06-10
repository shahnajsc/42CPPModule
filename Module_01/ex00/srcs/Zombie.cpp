/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:15:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/10 14:34:01 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(): name("Unnamed")
{
	std::cout << "\"" << this->name << "\" turned into a Zombie..!!!" << std::endl;
}

Zombie::Zombie(const std::string &_name): name(_name)
{
	std::cout << "\"" << this->name << "\" turned into a Zombie..!!!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << this->name << "\" destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
