/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:45:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 10:59:33 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "\033[32m" << "Dog: Default constructor called." << "\033[37m";
	std::cout << std::endl;
}

Dog::Dog(const Dog &copyCons): Animal(copyCons)
{
	std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &otherCons)
{
	std::cout << "Dog: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		Animal::operator= (otherCons);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[31m" << "Dog: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sounds: Woof... woof... ruffff rufff......." << std::endl;
}
