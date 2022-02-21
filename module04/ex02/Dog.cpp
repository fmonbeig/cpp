/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 18:07:26 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Dog::Dog(void): A_Animal("Dog")
	{
		_brain = new Brain();
		std::cout << "\e[0;32m*A Dog is coming*\e[0m" << std::endl;
	}

	Dog::Dog (const Dog &other) :
		A_Animal(other)
	{
		_brain = new Brain(*other._brain);
	}

	Dog::~Dog(void)
	{
		if (_brain != NULL)
			delete _brain;
		std::cout << "*A \e[0;32mDog\e[0m is leaving*" << std::endl;
	}

	Dog &Dog::operator=(const Dog & other)
	{
		A_Animal::operator=(other);
		if (_brain != NULL)
			delete _brain;
		_brain = new Brain(*other._brain);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	Dog::train()
	{
		this->_brain->put_idea();
		std::cout << "\e[0;31m*Wouf Wouf* (your dog is trained)\e[0m" << std::endl;
	}

	void	Dog::brain_scan() const
	{
		this->_brain->get_idea();
	}

	void	Dog::makeSound() const
	{
		std::cout << "🐶 Wouaf Wouaf 🐶" << std::endl;
	}
