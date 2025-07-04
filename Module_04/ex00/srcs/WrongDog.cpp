/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:40 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:13:51 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
	this->type = "WrongDog";
	std::cout << "\033[32m" << "WrongDog: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copyCons): WrongAnimal(copyCons)
{
	std::cout << "WrongDog: Copy constructor called." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &otherCons)
{
	std::cout << "WrongDog: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		WrongAnimal::operator= (otherCons);
	}
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "\033[31m" << "WrongDog: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog Sounds: Woof... woof..ruffff rufff...." << std::endl;
}
