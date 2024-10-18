/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:19:45 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/18 16:47:24 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int num)
{
	std::cout << "Default int constructor called" << std::endl;
	this->fixed_value = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Default floating constructor called" << std::endl;
	this->fixed_value = roundf(num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Fixed Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->fixed_value = a.getRawBits();
	}
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)(fixed_value) / (float)(1 << fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (fixed_value >> fractional_bits);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_value = raw;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
