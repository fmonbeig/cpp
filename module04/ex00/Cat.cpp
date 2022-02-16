/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 18:01:59 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Cat::Cat(void) : Animal("Cat")
	{ std::cout << "*A Cat is coming*" << std::endl; }

	Cat::Cat (const Cat &other) :
	Animal(other)
	{}

	Cat::~Cat(void)
	{ std::cout << "*A Cat is leaving*" << std::endl; }

	Cat &Cat::operator=(const Cat & other)
	{
		Animal::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	Cat::makeSound() const
{
	std::cout << "🐱 Meoooooowww 🐱" << std::endl;
}
