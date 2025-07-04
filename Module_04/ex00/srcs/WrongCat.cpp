/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/07/04 11:11:05 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "\033[32m" << "WrongCat: Default constructor called.";
	std::cout << "\033[37m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copyCons): WrongAnimal(copyCons)
{
	std::cout << "WrongCat: Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &otherCons)
{
	std::cout << "WrongCat: Copy assignment operator called." << std::endl;
	if (this != &otherCons)
	{
		WrongAnimal::operator= (otherCons);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[31m" << "WrongCat: Destructor called." << "\033[37m";
	std::cout << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sounds: Meowww.... Meowwwwww... Meeeee" << std::endl;
}
