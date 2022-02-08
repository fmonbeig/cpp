/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:24:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/07 17:13:04 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
	public:
	Fixed(void);
	Fixed (const Fixed &other);
	~Fixed(void);
	Fixed &operator=(const Fixed &other);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	private:
	int _value;
	static const int _bits = 8;
};

#endif
