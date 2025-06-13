/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/13 12:13:29 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
private:
	int fpValue;
	static const int fracBits = 8;

public:
	Fixed();
	Fixed(const Fixed& copyCons);
	Fixed& operator = (const Fixed& copyCons);


	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};
