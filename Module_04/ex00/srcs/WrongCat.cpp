/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:13:37 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/25 14:38:19 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat: Default constructor called." << std::endl;

}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal()
{
	this->type = other.type;
	std::cout << "WrongCat: Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "WrongCat: Copy assignment operator called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sounds: Woof... woof..ruffff rufff...." << std::endl;
}
