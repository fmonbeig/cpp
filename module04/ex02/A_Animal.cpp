/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 18:03:44 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	A_Animal::A_Animal(std::string type) : _type(type)
	{ std::cout << "**An Animal is coming**" << std::endl; }

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	A_Animal::A_Animal(void) : _type("A_Animal")
	{ std::cout << "**An Animal is coming**" << std::endl; }

	A_Animal::A_Animal (const A_Animal &other)
	{
		this->_type = other._type;
	}

	A_Animal::~A_Animal(void)
	{ std::cout << "**An Animal is leaving**" << std::endl; }

	A_Animal &A_Animal::operator=(const A_Animal & other)
	{
		this->_type = other._type;
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

std::string	A_Animal::getType() const
{
	return (this->_type);
}
