/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 12:25:51 by fmonbeig         ###   ########.fr       */
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

	Span::Span(const Span &other)
	{
		this->_N = other._N;
		for (int i=0; i < other._span.size(); i++)
			_span.push_back(other._span[i]);
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
			for (int i=0; i < rhs._span.size(); i++)
				_span.push_back(rhs._span[i]);
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

void	Span::addNumber(int i)
{
	if (_span.size() < _N)
		_span.push_back(i);
	else
		throw TooMuchElement();
}

int	Span::longestSpan()
{
	std::vector<int> temp = _span;

	if (_span.size() > 1)
	{
		std::sort(temp.begin(), temp.end());
		return (temp.back() - temp.front());
	}
	throw NotEnoughElement();
}

int	Span::shortestSpan()
{
	std::vector<int> temp = _span;
	int	x;
	int	ret;

	if (_span.size() > 1)
	{
		std::sort(temp.begin(), temp.end());
		ret = temp[1] - temp[0];
		for (int i = 0; i < temp.size() - 1; i++)
		{
			x = temp[i + 1] - temp[i];
			if (x < ret)
				ret = x;
		}
		return (ret);
	}
	throw NotEnoughElement();
}

void	Span::addRangeIt(std::vector<int> v)
{
	if (_span.size() + v.size() < _N)
		_span.insert(_span.end(), v.begin(), v.end());
	else
		throw TooMuchElement();
}
