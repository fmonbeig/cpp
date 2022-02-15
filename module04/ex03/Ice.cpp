/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/15 14:26:16 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Ice::Ice(void): AMateria("ice")
	{
		std::cout << "**Ice Materia is created**" << std::endl;
	}

	Ice::Ice (const Ice &other):
		AMateria(other)
	{}

	Ice::~Ice(void)
	{
		std::cout << "**Ice Materia is created**" << std::endl;
	}

	Ice &Ice::operator=(const Ice & other)
	{
		AMateria::operator=(other);
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	AMateria*	Ice::clone() const
	{
		AMateria *temp = new Ice;
		AMateria = this;

		return (AMateria);
	}

	void	Ice::use(ICharacter& target)
	{
		std::cout << "* shoots an ice bolt at " << target._name << " *" << std::endl;
	}
