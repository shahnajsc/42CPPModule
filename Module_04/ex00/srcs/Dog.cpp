/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:45:49 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/25 10:53:32 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog &copyCons): Animal()
{
	this->type = copyCons.type;
	std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &otherCons)
{
	if (this != &otherCons) {
		this->type = otherCons.type;
	}
	std::cout << "Dog: Copy assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sounds: Woof... woof... ruffff rufff......." << std::endl;
}
