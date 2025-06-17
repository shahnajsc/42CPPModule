/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:30:01 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/17 15:41:01 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point &copyCons);
	Point& operator = (const Point& copyCon);
	~Point();

	float getX() const;
	float getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);



