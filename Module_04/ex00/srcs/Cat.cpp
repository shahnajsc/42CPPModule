/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:41:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/25 14:23:02 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat: Default constructor called." << std::endl;

}

Cat::Cat(const Cat &other): Animal()
{
	this->type = other.type;
	std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Cat: Copy assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sounds: Meowww.... Meowwwwww.... Meeeee" << std::endl;
}
