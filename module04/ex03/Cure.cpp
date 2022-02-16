/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 16:51:59 by fmonbeig         ###   ########.fr       */
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
		std::cout << "**\e[0;32mCure\e[0m Materia is created**" << std::endl;
	}

	Cure::Cure (const Cure &other):
		AMateria(other)
	{}

	Cure::~Cure(void)
	{
		std::cout << "**\e[0;32mCure\e[0m Materia is destroyed**" << std::endl;
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
		*temp = *this;

		return (temp);
	}

	void	Cure::use(ICharacter& target)
	{
		std::cout << "* \e[0;32mheals\e[0m " << target.getName() << "'s wounds *" << std::endl;
	}
