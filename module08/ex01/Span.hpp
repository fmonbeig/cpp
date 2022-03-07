/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 12:25:40 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>


class Span
{
	protected:
		Span();
		std::vector<int> _span;
		unsigned int _N;

	public:
		Span(unsigned int N);
		Span(Span const & other );
		virtual ~Span();

		Span & operator=(Span const & other);

		void	addNumber(int i);
		void	addRangeIt(std::vector<int> v);
		int		shortestSpan();
		int		longestSpan();

		class TooMuchElement: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class NotEnoughElement: public std::exception{
			public:
				virtual const char* what() const throw();
		};
};

#endif
