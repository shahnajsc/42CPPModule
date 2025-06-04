/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:48:13 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/04 17:42:12 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int fpNumber;
	static const int fracBits = 8;

public:
	Fixed();
	Fixed(const Fixed& copyCons);
	Fixed& operator = (const Fixed& copyCons);


	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif
