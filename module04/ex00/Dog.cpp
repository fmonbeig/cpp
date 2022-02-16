/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 18:01:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Dog::Dog(void): Animal("Dog")
	{ std::cout << "*A Dog is coming*" << std::endl; }

	Dog::Dog (const Dog &other) :
	Animal(other)
	{}

	Dog::~Dog(void)
	{ std::cout << "*A Dog is leaving*" << std::endl; }

	Dog &Dog::operator=(const Dog & other)
	{
		Animal::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	Dog::makeSound() const
{
	std::cout << "🐶 Wouaf Wouaf 🐶" << std::endl;
}
