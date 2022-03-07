/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 11:42:07 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

Conversion::Conversion(char *str):
	_char(0), _int(0), _float(0), _double(0), _flagChar(0), _precision(1),
	flagCharImpossible(FALSE), flagIntImpossible(FALSE),
	flagFloatImpossible(FALSE), flagDoubleImpossible(FALSE),
	flagIsInt(FALSE), flagInfinity(FALSE)
{
	checkType(str);
	checkLimit(str);
	std::cout << "**Conversion is created**" << std::endl;
}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

Conversion::Conversion(void):
	_char(0), _int(0), _float(0), _double(0), _flagChar(0), _precision(1),
	flagCharImpossible(FALSE), flagIntImpossible(FALSE),
	flagFloatImpossible(FALSE), flagDoubleImpossible(FALSE),
	flagIsInt(FALSE), flagInfinity(FALSE)
{}

Conversion::Conversion (const Conversion &other)
{
	this->_char = other._char;
	this->_int = other._int;
	this->_float = other._float;
	this->_double = other._double;
	flagCharImpossible = other.flagCharImpossible;
	flagIntImpossible = other.flagIntImpossible;
	flagFloatImpossible = other.flagFloatImpossible;
	flagDoubleImpossible = other.flagDoubleImpossible;
	flagIsInt = other.flagIsInt;
}

Conversion::~Conversion(void)
{}

Conversion &Conversion::operator=(const Conversion & rhs)
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		flagCharImpossible = rhs.flagCharImpossible;
		flagIntImpossible = rhs.flagIntImpossible;
		flagFloatImpossible = rhs.flagFloatImpossible;
		flagDoubleImpossible = rhs.flagDoubleImpossible;
		flagIsInt = rhs.flagIsInt;
	}
		return *this;
}

// +------------------------------------------+ //
//   OTHER FUNCTION					        //
// +------------------------------------------+ //

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

bool	Conversion::isChar(char *str)
{
	int	i;

	i = 0;
	std::string temp = std::string(str);
	while (str[i])
		i++;
	if (i == 3)
	{
		if (str[0] == '\'' && str[2] == '\'')
		{
			this->_char = str[1];
			return (TRUE);
		}
	}
	return (FALSE);
}

bool	Conversion::isInt(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '.')
		return (FALSE);
	if (str[0] == '-')
		i++;
	while (str[++i])
	{
		_precision++;
		if (ft_isdigit(str[i]))
			continue ;
		else if (str[i] == '.')
		{
			i++;
			break;
		}
		else
			return (FALSE);
	}
	i--;
	while (str[++i])
	{
		_precision++;
		if (str[i] == '0')
			continue ;
		else
			return (FALSE);
	}
	return (TRUE);
}

bool	Conversion::isFloat(char *str)
{
	int	i;
	int	flag_zero;

	flag_zero = 0;
	i = 0;
	while (str[i])
		i++;
	if (str[i - 1] != 'f')
		return (FALSE);
	i = -1;
	if (str[0] == '.' || str[0] == '-')
		i++;
	while (str[++i])
	{
		if (ft_isdigit(str[i]))
			continue ;
		else if (str[i] == '.')
		{
			i++;
			break;
		}
		else
			return (FALSE);
	}
	i--;
	while (str[++i])
	{
		_precision++;
		if (str[i] == 0)
			continue ;
		else if (ft_isdigit(str[i]))
		{
			flag_zero = 1;
			continue ;
		}
		else if (str[i] == 'f')
			break;
		else
			return (FALSE);
	}
	if (!flag_zero)
		flagIsInt = TRUE;
	return (TRUE);
}

bool	Conversion::isDouble(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '.' || str[0] == '-')
		i++;
	while (str[++i])
	{
		if (ft_isdigit(str[i]))
			continue ;
		else if (str[i] == '.')
		{
			i++;
			break;
		}
		else
			return (FALSE);
	}
	i--;
	while (str[++i])
	{
		_precision++;
		if (ft_isdigit(str[i]))
			continue ;
		else
			return (FALSE);
	}
	return (TRUE);
}

void	Conversion::checkType(char *str)
{
	std::string temp = std::string(str);

	if (temp == "inff" || temp == "-inff"
		|| temp == "+inff" || temp == "nanf")
	{
		flagCharImpossible = TRUE;
		flagIntImpossible = TRUE;
		flagInfinity = TRUE;
		_float = static_cast<float>(std::strtod(str, NULL));
		_double = static_cast<double>(_float);
		return ;
	}

	if ( temp == "inf" || temp == "-inf"
		|| temp == "+inf" || temp == "nan")
	{
		flagCharImpossible = TRUE;
		flagIntImpossible = TRUE;
		flagInfinity = TRUE;
		_double = static_cast<double>(std::strtod(str, NULL));
		_float = static_cast<float>(_double);
		return ;
	}

	if (isChar(str))
	{
		std::cout << "\e[1;37mIT'S A : \e[1;31mCHAR\e[0m" << std::endl;
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
		return ;
	}

	if (isInt(str))
	{
		std::cout << "\e[1;37mIT'S AN : \e[1;31mINT\e[0m" << std::endl;
		_int = static_cast<int>(std::strtod(str, NULL));
		if (_int >= 0 && _int <= 127)
			_char = static_cast<char>(_int);
		else
			flagCharImpossible = TRUE;
		_float = static_cast<float>(std::strtod(str, NULL));
		_double = static_cast<double>(std::strtod(str, NULL));
		flagIsInt = TRUE;
		return ;
	}

	if (isFloat(str))
	{
		std::cout << "\e[1;37mIT'S A : \e[1;31mFLOAT\e[0m" << std::endl;
		_float = static_cast<float>(std::strtod(str, NULL));
		if (_float >= 0 && _float <= 127)
			_char = static_cast<char>(_float);
		else
			flagCharImpossible = TRUE;
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float );
		return ;
	}

	if (isDouble(str))
	{
		std::cout << "\e[1;37mIT'S A : \e[1;31mDOUBLE\e[0m" << std::endl;
		_double = static_cast<double>(std::strtod(str, NULL));
		if (_double >= 0 && _double <= 127)
			_char = static_cast<char>(_double);
		else
			flagCharImpossible = TRUE;
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
		return ;
	}

	flagCharImpossible = TRUE;
	flagIntImpossible = TRUE;
	flagFloatImpossible = TRUE;
	flagDoubleImpossible = TRUE;
}

void	Conversion::checkLimit(char *str)
{
	double value = std::strtod(str, NULL);

	if (flagInfinity == FALSE)
	{
		if (value < 0 || value > 127)
				flagCharImpossible = TRUE;
		if (value < std::numeric_limits<int>::min() ||
			value > std::numeric_limits<int>::max())
				flagIntImpossible = TRUE;
		if (value < -std::numeric_limits<float>::max() ||
			value > std::numeric_limits<float>::max())
				flagFloatImpossible = TRUE;
	}

}

void	Conversion::printValues()
{
	std::cout << "\e[0;33m=========================\e[0m" << std::endl;
	if (flagCharImpossible == TRUE)
		std::cout << "Char  : impossible" << std::endl;
	else
	{
		if (_char >= 32 && _char <= 126)
			std::cout << "Char  : '" << _char << "'" << std::endl;
		else
			std::cout << "Char  : " << "Non displayable" << std::endl;
	}

	if (flagIntImpossible == TRUE)
		std::cout << "Int   : impossible" << std::endl;
	else
		std::cout << "Int   : " << _int << std::endl;

	if (flagFloatImpossible == TRUE)
		std::cout << "Float : impossible" << std::endl;
	else
	{
		std::cout << "Float : " << std::setprecision(_precision) << _float;
		if (flagIsInt == TRUE)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}

	if (flagDoubleImpossible == TRUE)
		std::cout << "Double: impossible" << std::endl;
	else
	{
		std::cout << "Double: " << std::setprecision(_precision) << _double;
		if (flagIsInt == TRUE)
			std::cout << ".0";
		std::cout << std::endl;

	}

	std::cout << "\e[0;33m=========================\e[0m" << std::endl;
}




