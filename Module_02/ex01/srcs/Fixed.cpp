/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/13 14:05:46 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpValue = intNumber<< fracBits;
}

Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpValue = roundf(floatNumber * (1 << this->fracBits));
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
		this->fpValue = copyOperator.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fpValue);
}
void Fixed::setRawBits(int const raw)
{
	this->fpValue = raw;
}

float Fixed::toFloat(void) const {
    return ((float)this->fpValue / (1 << this->fracBits));
}

int Fixed::toInt (void) const {
    return (this->fpValue >> this->fracBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &source) {
    out << source.toFloat();
    return (out);
}
