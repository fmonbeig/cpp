/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/22 18:45:51 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

Conversion::Conversion(char *str):
	_char(0), _int(0), _float(0), _double(0), _flagChar(0),
	flagCharImpossible(FALSE), flagIntImpossible(FALSE),
	flagFloatImpossible(FALSE), flagDoubleImpossible(FALSE),
	flagNan(FALSE)
{
	checkType(str);
	convertToChar(str);
	// this->_int = ;
	// this->_float = ;
	// this->_double = ;
	std::cout << "**Conversion is created**" << std::endl;
}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

Conversion::Conversion(void):
	_char(0), _int(0), _float(0), _double(0), _flagChar(0),
	flagCharImpossible(FALSE), flagIntImpossible(FALSE),
	flagFloatImpossible(FALSE), flagDoubleImpossible(FALSE),
	flagNan(FALSE)
{
	std::cout << "**Default Conversion is created**" << std::endl;
}

Conversion::Conversion (const Conversion &other) //FIXME rajouter les flags
{
	this->_char = other._char;
	this->_int = other._int;
	this->_float = other._float;
	this->_double = other._double;
}

Conversion::~Conversion(void)
{
	std::cout << "**Conversion is destroyed**" << std::endl;
}

Conversion &Conversion::operator=(const Conversion & rhs)
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}
		return *this;
}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void	Conversion::convertToChar(char *str) // FIXME rajouter la notion de non displayable
{
	int	i;

	i = 0;
	std::string temp = std::string(str);
	while (str[i])
		i++;
	if (i == 3)
	{
		if (str[0] == '\'' && str[2] == '\'')
			this->_char = str[1];
	}
}

void	Conversion::checkType(char *str)
{

	std::string temp = std::string(str);
	if (temp == "nan" || temp == "nanf") // FIXME rajouter les inf
	{
		flagNan = TRUE;
		flagCharImpossible = TRUE;
		flagIntImpossible = TRUE;
	}
}



void	Conversion::printValues()
{
	if (flagCharImpossible == TRUE)
		std::cout << "Char: impossible" << std::endl;
	else
		std::cout << "Char: " << _char << std::endl;

	if (flagIntImpossible == TRUE)
		std::cout << "Int: impossible" << std::endl;
	else
		std::cout << "Int: " << _int << std::endl;

	if (flagFloatImpossible == TRUE)
		std::cout << "Float: impossible" << std::endl;
	else if (flagNan == TRUE)
		std::cout << "Float: nanf" << std::endl;
	else
		std::cout << "Float: " << _float << std::endl;

	if (flagDoubleImpossible == TRUE)
		std::cout << "Double: impossible" << std::endl;
	else if (flagNan == TRUE)
		std::cout << "Double: nan" << std::endl;
	else
		std::cout << "Double: " << _double << std::endl;
}
