/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:08:34 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/28 16:07:03 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
};

Fixed::Fixed(const int num)
{
	this->fixed_value = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
	this->fixed_value = roundf(num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &a)
{
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
	return (this->fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
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
