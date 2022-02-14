/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 14:08:00 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	WrongAnimal::WrongAnimal(std::string type) : _type(type)
	{ std::cout << "**An WrongAnimal is coming**" << std::endl; }

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
	{ std::cout << "**An WrongAnimal is coming**" << std::endl; }

	WrongAnimal::WrongAnimal (const WrongAnimal &other)
	{
		this->_type = other._type;
	}

	WrongAnimal::~WrongAnimal(void)
	{ std::cout << "**An WrongAnimal is leaving**" << std::endl; }

	WrongAnimal &WrongAnimal::operator=(const WrongAnimal & other)
	{
		this->_type = other._type;
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	WrongAnimal::makeSound() const
{
		std::cout << "** BOUARRGGGGHHHHBLOFFF **" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
