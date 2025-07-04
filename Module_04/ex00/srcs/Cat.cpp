/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:41:00 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:04:53 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "\033[32m" << "Cat: Default constructor called." << "\033[37m";
	std::cout << std::endl;
}

Cat::Cat(const Cat &copyCons): Animal(copyCons)
{
	std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &otherCons)
{
	std::cout << "Cat: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		Animal::operator= (otherCons);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[31m" << "Cat: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sounds: Meowww.... Meowwwwww.... Meeeee" << std::endl;
}
