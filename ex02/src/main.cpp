/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:08:39 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/21 15:23:05 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed		a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << "Initial value of a: " << a << std::endl;
	std::cout << "Prefix increment: " << ++a << std::endl;
	std::cout << "Value of a after ++a: " << a << std::endl;
	std::cout << "Postfix increment: " << a++ << std::endl;
	std::cout << "Value of a after a++: " << a << std::endl;

	std::cout << "Value of b: " << b << std::endl;
	std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;

	std::cout << "Testing comparison operators: " << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a == b) << std::endl;

	Fixed	c(10);
	Fixed	d(5);
	std::cout << "Testing arithmetic operators: " << std::endl;
	std::cout << "c + d: " << (c + d) << std::endl;
	std::cout << "c - d: " << (c - d) << std::endl;
	std::cout << "c * d: " << (c * d) << std::endl;
	std::cout << "c / d: " << (c / d) << std::endl;

	return (0);
}
