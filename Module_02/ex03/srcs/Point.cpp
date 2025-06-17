/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachowd <shachowd@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:30:10 by shachowd          #+#    #+#             */
/*   Updated: 2025/06/17 15:41:20 by shachowd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(const Point &copyCons) : x(copyCons.x), y(copyCons.y)
{
}

Point &Point::operator = (const Point &copyCons)
{
	// private menbers are constant. No changes
	(void)copyCons;
	return (*this);
}

Point::~Point()
{
}

float Point::getX() const
{
	return (this->x.toFloat());
}
float Point::getY() const
{
	return (this->y.toFloat());
}

