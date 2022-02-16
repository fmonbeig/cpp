/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 14:12:26 by fmonbeig         ###   ########.fr       */
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
		std::cout << "**\e[0;34mIce\e[0m Materia is created**" << std::endl;
	}

	Ice::Ice (const Ice &other):
		AMateria(other)
	{}

	Ice::~Ice(void)
	{
		std::cout << "**\e[0;34mIce\e[0m Materia is destroyed**" << std::endl;
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
		*temp = *this;

		return (temp);
	}

	void	Ice::use(ICharacter& target)
	{
		std::cout << "* shoots an \e[0;34mice\e[0m bolt at " << target.getName() << " *" << std::endl;
	}
