/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 18:04:33 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Cat::Cat(void) : A_Animal("Cat")
	{
		_brain = new Brain;
		std::cout << "\e[0;33m*A Cat is coming*\e[0m" << std::endl;
	}

	Cat::Cat (const Cat &other) :
	A_Animal(other)
	{
		delete _brain;
		_brain = new Brain;
		*_brain = *other._brain;

	}

	Cat::~Cat(void)
	{
		delete _brain;
		std::cout << "*A \e[0;33mCat\e[0m is leaving*" << std::endl;
	}

	Cat &Cat::operator=(const Cat & other)
	{
		A_Animal::operator=(other);
		delete _brain;
		_brain = new Brain;
		*_brain = *other._brain;
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	Cat::new_brain()
{
	this->_brain = new Brain;
}

void	Cat::makeSound() const
{
	std::cout << "🐱 Meoooooowww 🐱" << std::endl;
}
