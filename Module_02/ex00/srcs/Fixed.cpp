/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/05 10:19:42 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copyCons)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyCons;
}
Fixed &Fixed::operator=(const Fixed& copyOperator)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &copyOperator)
	{
		this->fpNumber = copyOperator.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpNumber);
}
void Fixed::setRawBits(int const raw)
{
	this->fpNumber = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
