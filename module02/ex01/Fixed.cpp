/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:27:32 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/09 15:42:32 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Fixed::Fixed(void)
	{
		std::cout << "Default constructor called" << std::endl;
		this->_value = 0;
	}

	Fixed::Fixed (const Fixed &other)
	{
		std::cout << "Copy constructor called" << std::endl;
		this->_value = other._value;
	}

	Fixed::~Fixed(void)
	{
		std::cout << "Destructor called" << std::endl;
	}

	Fixed &Fixed::operator=(const Fixed & other)
	{
		std::cout << "Copy assignement operator called" << std::endl;
		this->_value = other._value;
		return *this;
	}

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Fixed::Fixed(int value)
	{
		std::cout << "Int constructor called" << std::endl;
		this->_value = (value << Fixed::_bits);
	}

	Fixed::Fixed(const float value)
	{
		std::cout << "Float constructor called" << std::endl;
		this->_value = roundf(value * (1 << Fixed::_bits));
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD 					        //
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, Fixed const & rhs)
	{
		out << rhs.toFloat();
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION 					        //
// +------------------------------------------+ //

	int Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return(this->_value);
	}

	void Fixed::setRawBits( int const raw )
	{
		std::cout << "setRawBits function called" << std::endl;
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
