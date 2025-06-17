/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:30:05 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/17 15:41:31 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {

// }

float area(Point const a, Point const b, Point const c) {
	return (
		std::abs( 0.5 * ( a.getX() * (b.getY() - c.getY()) +
						b.getX() * (c.getY() - a.getX()) +
						c.getX() * (a.getY() - b.getY())
			)
		)
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	return (area(a, b, c) == area(a, b, point)
			+ area(a, point, c)
			+ area(point, b, c));
}
