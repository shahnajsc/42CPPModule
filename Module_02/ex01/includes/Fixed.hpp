/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/04 18:13:15 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_H
# define FIXED_H

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
	~Fixed();
};

#endif
