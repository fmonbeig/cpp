/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/01 17:26:51 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //
	Span::Span(unsigned int N): _N(N)
	{
		std::cout << "**Span is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Span::Span(void):_N(0)
	{
		std::cout << "**Default Span is created**" << std::endl;
	}

	Span::Span(const Span &other) //FIXME Mieux gérer les copies
	{
		this->_N = other._N;
	}

	Span::~Span(void)
	{
		std::cout << "**Span is destroyed**" << std::endl;
	}

	Span &Span::operator=(const Span & rhs)
	{
		if (this != &rhs)
		{
			this->_N = rhs._N;
		}
			return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

const char* Span::TooMuchElement::what() const throw()
{
	return ("\e[0;31mERROR: Span is full\e[0m");
}

const char* Span::NotEnoughElement::what() const throw()
{
	return ("\e[0;31mERROR: Not enough element\e[0m");
}

void	Span::addNumber(unsigned int i)
{
	if (_span.size() < _N)
		_span.push_back(i);
	else
		throw TooMuchElement();
}

unsigned int	Span::shortestpan()
{
	if (_span.size() <= 1)
		throw NotEnoughElement();
	else
	{

	}
}

unsigned int	Span::longestpan()
{
	if (_span.size() <= 1)
		throw NotEnoughElement();
	else
	{
		
	}

}
