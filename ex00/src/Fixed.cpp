/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:48:45 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/18 13:56:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

// copies the value of fixed value from a to this object
Fixed::Fixed(const	Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
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
