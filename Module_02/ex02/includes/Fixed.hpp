/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/16 15:33:59 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int fpNumber;
	static const int fracBits = 8;

public:
	Fixed();
	Fixed(const int intNumber);
	Fixed(const float floatNumber);
	Fixed(const Fixed& copyCons);
	Fixed& operator = (const Fixed& copyCons);


	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt( void ) const;

	bool operator>(const Fixed &copyObj) const;
	bool operator<(const Fixed &copyObj) const;
	bool operator>=(const Fixed &copyObj) const;
	bool operator<=(const Fixed &copyObj) const;
	bool operator==(const Fixed &copyObj) const;
	bool operator!=(const Fixed &copyObj) const;

	Fixed operator+(const Fixed &copyObj) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &num1, Fixed &num2);
	static const Fixed &min(const Fixed &num1, const Fixed &num2);
	static Fixed &max(Fixed &num1, Fixed &num2);
	static const Fixed &max(const Fixed &num1, const Fixed &num2);




	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &source);
