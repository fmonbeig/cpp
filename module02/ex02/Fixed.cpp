/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:27:32 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 15:42:12 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Fixed::Fixed(void)
	{
		this->_value = 0;
	}

	Fixed::Fixed (const Fixed &other)
	{
		_value = other._value;
	}

	Fixed::~Fixed(void)
	{
		return ;
	}

	Fixed &Fixed::operator=(const Fixed & other)
	{
		this->_value = other._value;
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Fixed::Fixed(int value)
	{
		this->_value = (value << _bits);
	}

	Fixed::Fixed(const float value)
	{
		this->_value = roundf(value * (1 << _bits));
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD : COMPARE 				//
// +------------------------------------------+ //

	bool	Fixed::operator>(const Fixed& rhs) const
	{
		if (this->_value > rhs._value)
			return (TRUE);
		return (FALSE);
	}

	bool	Fixed::operator<(const Fixed& rhs) const
	{
		if (this->_value < rhs._value)
			return (TRUE);
		return (FALSE);
	}

	bool	Fixed::operator>=(const Fixed& rhs) const
	{
		if (this->_value >= rhs._value)
			return (TRUE);
		return (FALSE);
	}

	bool	Fixed::operator<=(const Fixed& rhs) const
	{
		if (this->_value <= rhs._value)
			return (TRUE);
		return (FALSE);
	}

	bool	Fixed::operator==(const Fixed& rhs) const
	{
		if (this->_value == rhs._value)
			return (TRUE);
		return (FALSE);
	}

	bool	Fixed::operator!=(const Fixed& rhs) const
	{
		if (this->_value != rhs._value)
			return (TRUE);
		return (FALSE);
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD : CALCULATE				//
// +------------------------------------------+ //

	Fixed Fixed::operator+(const Fixed& rhs)
	{
		Fixed	ret;

		ret._value = this->_value + rhs._value;
		return ret;
	}

	Fixed Fixed::operator-(const Fixed& rhs)
	{
		Fixed	ret;

		ret._value = this->_value - rhs._value;
		return ret;
	}

	Fixed Fixed::operator*(const Fixed& rhs)
	{
		Fixed	ret;

		long int x;
		long int y;

		x = (long)this->_value;
		y = (long)rhs._value;
		ret._value = (x * y) / (1 << ret._bits);
		return ret;
	}

	Fixed Fixed::operator/(const Fixed& rhs)
	{
		Fixed	ret;

		long int x;
		long int y;

		x = (long)this->_value;
		y = (long)rhs._value;
		ret._value = (x * (1 << ret._bits) / y);
		return ret;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD : CALCULATE				//
// +------------------------------------------+ //

	Fixed&	Fixed::operator++()
	{
		++this->_value;
		return (*this);
	}
	Fixed	Fixed::operator++(int)
	{
		Fixed	temp;

		temp = *this;
		++this->_value;
		return (temp);
	}

	Fixed&	Fixed::operator--()
	{
		--this->_value;
		return (*this);
	}

	Fixed	Fixed::operator--(int)
	{
		Fixed	temp;

		temp = *this;
		--this->_value;
		return (temp);
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION : MIN MAX			        //
// +------------------------------------------+ //

	Fixed&	Fixed::min( Fixed& x, Fixed& y){
		return (x < y ? x : y); }

	Fixed const &Fixed::min( const Fixed& x, const Fixed& y){
		return (x < y ? x : y); }

	Fixed& Fixed::max( Fixed& x, Fixed& y){
		return (x > y ? x : y); }

	Fixed const &Fixed::max( const Fixed& x, const Fixed& y){
		return (x > y ? x : y); }


// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	int Fixed::getRawBits(void) const
	{
		return(this->_value);
	}

	void Fixed::setRawBits( int const raw )
	{
		this->_value = raw;
	}

	float	Fixed::toFloat( void ) const
	{
		return ((float)this->_value / (float)(1 << Fixed::_bits));
	}

	int		Fixed::toInt( void ) const
	{
		return (this->_value >> Fixed::_bits);
	}

// +------------------------------------------+ //
//   OTHER FUNCTION								//
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, Fixed const & rhs)
	{
		out << rhs.toFloat();
		return out;
	}

	Fixed&	min( Fixed& x, Fixed& y){
		return (x < y ? x : y); }

	Fixed const &min( const Fixed& x, const Fixed& y){
		return (x < y ? x : y); }

	Fixed& max( Fixed& x, Fixed& y){
		return (x > y ? x : y); }

	Fixed const &max( const Fixed& x, const Fixed& y){
		return (x > y ? x : y); }
