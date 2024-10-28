/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:18:26 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/28 21:39:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	const Point	a;
	const Point	b(10, 0);
	const Point	c(0, 10);
	const Point	point(1, 1);

	{
		std::cout << "point( x= " << point.getX() << " y= " << point.getY() << ")\n"
		" a(x= " << a.getX() << " y= " << a.getY() << " )\n" <<
		" b(x= " << b.getX() << " y= " << b.getY() << ")\n" <<
		" c(x= " << c.getX() << " y= " << c.getY() << ")\n" << std::endl;
		if (bsp(a, b, c, point) == true)
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	{
		Point a(-1.79, -1.5);
		Point b(2.5, 2.0);
		Point c(-1, -2);
		Point point(8.1, -9);
		std::cout << "point( x= " << point.getX() << " y= " << point.getY() << ")\n"
		" a(x= " << a.getX() << "y= " << a.getY() << ")\n" <<
		" b(x= " << b.getX() << "y= " << b.getY() << ")\n" <<
		" c(x= " << c.getX() << "y= " << c.getY() << ")\n" << std::endl;
		if (bsp(a, b, c, point) == true)
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	return (0);
}
