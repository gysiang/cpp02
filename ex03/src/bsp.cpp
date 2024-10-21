/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:24:55 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/22 01:00:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area(const Point a, const Point b, const Point c)
{
	float	area;

	area = (
		(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
		+ (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
		+ (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
	) / 2.0f;
	return (fabs(area));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d0, d1, d2, d3;
	bool	result = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	// is 0 when the point lines in between the 2 given points
	// and unable to form a triangle
	if (d1 == 0 || d2 == 0 || d3 == 0)
		result = false;
	else if (d1 + d2 + d3 == d0)
		result = true;
	return (result);
}
