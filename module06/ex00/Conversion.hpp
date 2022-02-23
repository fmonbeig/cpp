/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:30:32 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 17:27:22 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdexcept>
#include <stdlib.h>
#include <limits>

#define TRUE 1
#define FALSE 0


class Conversion
{
	protected:
		Conversion();
		char	_char;
		int		_int;
		float	_float;
		double	_double;
		int		_flagChar;
		int		_precision;
		int		flagIsInt;
		int		flagInfinity;
		int		flagCharImpossible;
		int		flagIntImpossible;
		int		flagFloatImpossible;
		int		flagDoubleImpossible;

	public:
		//canonical fom
		Conversion(char *str);
		Conversion(Conversion const & other );
		virtual ~Conversion();

		//Overload operator
		Conversion & operator=(Conversion const & other);

		//get function

		//other function
		void	checkType(char *str);
		void	checkLimit(char *str);
		bool	isChar(char *str);
		bool	isInt(char *str);
		bool	isFloat(char *str);
		bool	isDouble(char *str);
		void	convertToDouble(char *str);

		void	printValues();
};

#endif
