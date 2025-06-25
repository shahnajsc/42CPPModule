/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:40 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/25 14:38:26 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
	this->type = "WrongDog";
	std::cout << "WrongDog: Default constructor called." << std::endl;
}

WrongDog::WrongDog(const WrongDog &copyCons): WrongAnimal()
{
	this->type = copyCons.type;
	std::cout << "WrongDog: Copy constructor called." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &otherCons)
{
	if (this != &otherCons) {
		this->type = otherCons.type;
	}
	std::cout << "WrongDog: Copy assignment operator called." << std::endl;
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog: Destructor called." << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog Sounds: Meowww.... Meowwwwww... Meeeee" << std::endl;
}
