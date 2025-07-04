/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:00:34 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:34:06 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << "\033[32m" << "Animal: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
}

Animal::Animal(const Animal& copyCons)
{
	std::cout << "Animal: Copy constructor called." << std::endl;
	*this = copyCons;
}

Animal& Animal::operator = (const Animal& otherCons)
{
	std::cout << "Animal: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		this->type = otherCons.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[31m" << "Animal: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sounds: Grrrrr... Grr... Grrrr " << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
