/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/13 14:04:47 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int fpValue;
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
	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &source);
