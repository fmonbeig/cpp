/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:24:02 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 15:26:36 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

#define TRUE 1
#define FALSE 0

class Fixed
{
	public:
	Fixed();
	Fixed(int value);
	Fixed(const float value);
	Fixed (const Fixed& other);
	virtual ~Fixed();

	Fixed&	operator=(const Fixed& other); //

	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;

	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);

	Fixed&	operator++();		//Prefix increment
	Fixed	operator++(int);	//Postfix increment
	Fixed&	operator--();		//Prefix increment
	Fixed	operator--(int);	//Postfix increment

	static Fixed&	min( Fixed& x, Fixed& y);
	static Fixed&	max( Fixed& x, Fixed& y);
	static Fixed const &min( const Fixed& x, const Fixed& y);
	static Fixed const &max( const Fixed& x, const Fixed& y);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	private:
	int		_value;
	static const int _bits = 8;
};

std::ostream& operator<<(std::ostream & out, const Fixed& rhs);
static Fixed&	min( Fixed& x, Fixed& y);
static Fixed&	max( Fixed& x, Fixed& y);
static Fixed const &min( const Fixed& x, const Fixed& y);
static Fixed const &max( const Fixed& x, const Fixed& y);

#endif
