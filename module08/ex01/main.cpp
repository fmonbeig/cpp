/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:10:07 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/02 14:03:57 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span span(3);

		span.addNumber(5);
		span.addNumber(9);
		span.addNumber(1);
		span.addNumber(898);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


		try
	{
		Span span(5);

		span.addNumber(-100);
		span.addNumber(500);
		span.addNumber(1);
		span.addNumber(900);
		span.addNumber(6);

		int i = span.longestpan();
		std::cout << i << std::endl;

		i = span.shortestpan();
		std::cout << i << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		try
	{
		std::vector<int> v = {7, 5, 0, 9, 18};
		Span span(100);
		span.addRangeIt(v);
		int i = span.longestpan();
		std::cout << i << std::endl;

		i = span.shortestpan();
		std::cout << i << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

			try
	{
		srand (time(NULL));

		Span span(100000);
		Span span2(1);
		for (int i = 0; i < 12000; i++)
			span.addNumber(rand() % 2147483640 + 1);

		int i = span.longestpan();
		std::cout << i << std::endl;

		i = span.shortestpan();
		std::cout << i << std::endl;
		span2 = span;

		i = span2.longestpan();
		std::cout << i << std::endl;

		i = span2.shortestpan();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}


