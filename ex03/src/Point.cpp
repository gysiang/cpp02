/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:18:29 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/21 18:24:47 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0) {};

Point::Point(const float x, const float y) : _x(x), _y(y) {};

Point::~Point() {};

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY()) {};

const Fixed &Point::getX() const
{
	return (this->_x);
}

const Fixed &Point::getY() const
{
	return (this->_y);
}

Point &Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}
