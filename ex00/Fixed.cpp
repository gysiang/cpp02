/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:48:45 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/18 13:10:04 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0) {};

Fixed::~Fixed() {};

// copies the value of fixed value from a to this object
Fixed::Fixed(const	Fixed &a)
{
	this->fixed_value = a.fixed_value;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
	{
		this->fixed_value = a.fixed_value;
	}
	return (*this);
}
