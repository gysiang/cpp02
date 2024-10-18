/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:48:49 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/18 13:24:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class	Fixed
{
	private:
		int	fixed_value;
		static const int fractional_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const	Fixed &a);
		Fixed &operator = (const Fixed &a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
