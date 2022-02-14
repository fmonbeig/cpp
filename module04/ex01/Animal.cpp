/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 14:08:00 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Animal::Animal(std::string type) : _type(type)
	{ std::cout << "**An Animal is coming**" << std::endl; }

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Animal::Animal(void) : _type("Animal")
	{ std::cout << "**An Animal is coming**" << std::endl; }

	Animal::Animal (const Animal &other)
	{
		this->_type = other._type;
	}

	Animal::~Animal(void)
	{ std::cout << "**An Animal is leaving**" << std::endl; }

	Animal &Animal::operator=(const Animal & other)
	{
		this->_type = other._type;
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	Animal::makeSound() const
{
	if (_type.compare("Dog") == 0)
		std::cout << "🐶 Wouaf Wouaf 🐶" << std::endl;
	else if (_type.compare("Cat") == 0)
		std::cout << "🐱 Meoooooowww 🐱" << std::endl;
	else
		std::cout << "** Animal noise **" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
