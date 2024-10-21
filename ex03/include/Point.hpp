/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:26:49 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/21 22:31:44 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		//constructor
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		// deconstructor
		~Point();
		Point &operator=(const Point &src);
		//getter
		const Fixed &getX() const;
		const Fixed &getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
