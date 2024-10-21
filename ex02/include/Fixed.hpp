/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:07:58 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/21 15:17:15 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_value;
		static const int fractional_bits = 8;

	public:
		// constructors
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &a);
		// deconstructors
		~Fixed();
		// overload operator
		Fixed &operator=(const Fixed &a);
		// comparison operator
		bool operator>(const Fixed &b) const;
		bool operator<(const Fixed &b) const;
		bool operator>=(const Fixed &b) const;
		bool operator<=(const Fixed &b) const;
		bool operator==(const Fixed &b) const;
		bool operator!=(const Fixed &b) const;
		// arithemetic operator
		float operator+(const Fixed &b) const;
		float operator-(const Fixed &b) const;
		float operator*(const Fixed &b) const;
		float operator/(const Fixed &b) const;
		// pre increment operator
		Fixed &operator++();
		Fixed &operator--();
		// post increment operator
		Fixed operator++(int);
		Fixed operator--(int);
		// public methods
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif
