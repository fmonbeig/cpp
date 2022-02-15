/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/15 14:26:11 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Cure::Cure(void): AMateria("cure")
	{
		std::cout << "**Cure Materia is created**" << std::endl;
	}

	Cure::Cure (const Cure &other):
		AMateria(other)
	{}

	Cure::~Cure(void)
	{
		std::cout << "**Cure Materia is created**" << std::endl;
	}

	Cure &Cure::operator=(const Cure & other)
	{
		AMateria::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	AMateria*	Cure::clone() const
	{
		AMateria *temp = new Cure;
		AMateria = this;

		return (AMateria);
	}

	void	Cure::use(ICharacter& target)
	{
		std::cout << "* heals " << target._name << "'s wounds *" << std::endl;
	}
