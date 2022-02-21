/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 17:57:52 by fmonbeig         ###   ########.fr       */
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
	{
		_brain = new Brain();
		std::cout << "\e[0;33m*A Cat is coming*\e[0m" << std::endl;
	}

	Cat::Cat (const Cat &other) :
	Animal(other)
	{
		_brain = new Brain(*other._brain);
	}

	Cat::~Cat(void)
	{
		if (_brain != NULL)
			delete _brain;
		std::cout << "*A \e[0;33mCat\e[0m is leaving*" << std::endl;
	}

	Cat &Cat::operator=(const Cat & other)
	{
		Animal::operator=(other);
		if (_brain != NULL)
			delete _brain;
		_brain = new Brain(*other._brain);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //
