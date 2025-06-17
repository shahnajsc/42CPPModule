/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:17 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/17 14:19:30 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : fpValue(0)
{
}

Fixed::Fixed(const int intNumber)
{
	this->fpValue = intNumber<< fracBits;
}

Fixed::Fixed(const float floatNumber)
{
	this->fpValue = roundf(floatNumber * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed& copyCons)
{
	*this = copyCons;
}
Fixed &Fixed::operator=(const Fixed& copyOperator)
{
	if (this != &copyOperator)
	{
		this->fpValue = copyOperator.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
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

std::ostream &operator << (std::ostream &out, const Fixed &source) {
	out << source.toFloat();
	return (out);
}

bool Fixed::operator > (const Fixed &copyObj) const
{
	return (this->fpValue > copyObj.getRawBits());
}

bool Fixed::operator < (const Fixed &copyObj) const
{
	return (this->fpValue < copyObj.getRawBits());
}

bool Fixed::operator >= (const Fixed &copyObj) const
{
	return (this->fpValue >= copyObj.getRawBits());
}

bool Fixed::operator <= (const Fixed &copyObj) const
{
	return (this->fpValue <= copyObj.getRawBits());
}

bool Fixed::operator == (const Fixed &copyObj) const
{
	return (this->fpValue == copyObj.getRawBits());
}

bool Fixed::operator != (const Fixed &copyObj) const
{
	return (this->fpValue != copyObj.getRawBits());
}

Fixed Fixed::operator + (const Fixed &copyObj) const
{
	return (Fixed(this->toFloat() + copyObj.toFloat()));
}

Fixed Fixed::operator - (const Fixed &copyObj) const
{
	return (Fixed(this->toFloat() -copyObj.toFloat()));
}

Fixed Fixed::operator * (const Fixed &copyObj) const
{
	return (Fixed(this->toFloat() * copyObj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &copyObj) const
{
	return (Fixed(this->toFloat() / copyObj.toFloat()));
}

Fixed &Fixed::operator ++ (void)
{
	this->fpValue++;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	operator++();
	return (temp);

}

Fixed &Fixed::operator -- (void)
{
	this->fpValue--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	return (num1 < num2 ? num1 : num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	return (num1 < num2 ? num1 : num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	return (num1 > num2 ? num1 : num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	return (num1 > num2 ? num1 : num2);
}
