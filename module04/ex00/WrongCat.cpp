/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 13:54:42 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
	{ std::cout << "*A WrongCat is coming*" << std::endl; }

	WrongCat::WrongCat (const WrongCat &other) :
	WrongAnimal(other)
	{}

	WrongCat::~WrongCat(void)
	{ std::cout << "*A WrongCat is leaving*" << std::endl; }

	WrongCat &WrongCat::operator=(const WrongCat & other)
	{
		WrongAnimal::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	WrongCat::makeSound() const
{
		std::cout << "** MEOooooOOOUUUUUUUWWW **" << std::endl;
}
