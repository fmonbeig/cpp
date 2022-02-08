/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:27:32 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/07 17:22:37 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed(void)
	{
		std::cout << "Default constructor called" << std::endl;
		this->_value = 0;
		return ;
	}

	Fixed::Fixed (const Fixed &other)
	{
		std::cout << "Copy constructor called" << std::endl;
		_value = other.getRawBits();
		return ;
	}

	Fixed::~Fixed(void)
	{
		std::cout << "Copy destructor called" << std::endl;
		return ;
	}

	Fixed &Fixed::operator=(const Fixed & other)
	{
		std::cout << "Copy assignement operator called" << std::endl;
		_value = other.getRawBits();
		return *this;
	}

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
