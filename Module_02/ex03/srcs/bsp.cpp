/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:30:05 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/18 14:18:48 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/*
Area Comparison Method: a point(P) is inside a tringle(ABC) if the area of the
triangle(ABC) is equal to the sum of the all three small areas(ABP, BCP, CAP),
and none of the small areas is less/equal to zero.
Area(A, B, C) = 1/2 * (Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By))
As, If the point is a vertex or on edge it return False, all barycentric
coordinates must be strictly greater than zero (> 0), not >= 0.
*/

float triangleArea(Point const p, Point const q, Point const r)
 {
	return (
		std::abs( 0.5 * ( p.getX() * (q.getY() - r.getY())
						+ q.getX() * (r.getY() - p.getX())
						+ r.getX() * (p.getY() - q.getY())
						)
				)
		);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float areaABC = triangleArea(a, b, c);
	float areaABP = triangleArea(a, b, point);
	float areaAPC = triangleArea(a, point, c);
	float areaPBC = triangleArea(point, b, c);

	return ((areaABC == areaABP + areaAPC + areaPBC) && areaABP > 0 && areaAPC > 0 && areaPBC > 0);
}
