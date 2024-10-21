/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:08:34 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/21 15:25:10 by gyong-si         ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed &b) const
{
	return (this->fixed_value > b.fixed_value);
}

bool	Fixed::operator<(const Fixed &b) const
{
	return (this->fixed_value < b.fixed_value);
}

bool	Fixed::operator>=(const Fixed &b) const
{
	return (this->fixed_value >= b.fixed_value);
}

bool	Fixed::operator<=(const Fixed &b) const
{
	return (this->fixed_value <= b.fixed_value);
}

bool	Fixed::operator==(const Fixed &b) const
{
	return (this->fixed_value == b.fixed_value);
}

bool	Fixed::operator!=(const Fixed &b) const
{
	return (this->fixed_value == b.fixed_value);
}

float	Fixed::operator+(const Fixed &b) const
{
	return (this->toFloat() + b.toFloat());
}

float	Fixed::operator-(const Fixed &b) const
{
	return (this->toFloat() - b.toFloat());
}

float	Fixed::operator*(const Fixed &b) const
{
	return (this->toFloat() * b.toFloat());
}

float	Fixed::operator/(const Fixed &b) const
{
	return (this->toFloat() / b.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->fixed_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->fixed_value--;
	return (*this);
}

// post increment
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fixed_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->fixed_value--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fixed_value < b.fixed_value)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixed_value < b.fixed_value)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fixed_value < b.fixed_value)
		return (b);
	else
		return (a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixed_value < b.fixed_value)
		return (b);
	else
		return (a);
}
