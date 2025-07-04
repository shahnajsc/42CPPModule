/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:32 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:04:04 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "\033[32m" << "WrongAnimal: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copyCons)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	*this = copyCons;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& otherCons)
{
	std::cout << "WrongAnimal: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->type = otherCons.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31m" << "WrongAnimal: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds: Grrrrr... Grr... Grrrr " << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
