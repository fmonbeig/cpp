/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:24:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 11:38:11 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(int value);
	Fixed(const float value);
	Fixed (const Fixed &other);
	virtual ~Fixed();

	Fixed &operator=(const Fixed &other);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	private:
	int		_value;
	static const int _bits = 8;
};

std::ostream &operator<<(std::ostream & out, Fixed const & rhs);

#endif
