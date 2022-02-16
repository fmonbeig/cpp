/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 16:54:30 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	AMateria::AMateria(std::string const & type) : _type(type)
	{
		std::cout << "**A \e[1;33mMateria\e[0m is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	AMateria::AMateria(void) : _type("empty")
	{
		std::cout << "**A \e[1;33mMateria\e[0m is created**" << std::endl;
	}

	AMateria::AMateria (const AMateria &other)
	{
		this->_type = other._type;
	}

	AMateria::~AMateria(void)
	{
		std::cout << "**A \e[1;33mMateria\e[0m is destroyed**" << std::endl;
	}

	AMateria &AMateria::operator=(const AMateria & other)
	{
		this->_type = other._type;
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	std::string const & AMateria::getType() const
	{
		return (this->_type);
	}

	void AMateria::use(__attribute__ ((unused)) ICharacter& target)
	{}
