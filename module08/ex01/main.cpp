/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:10:07 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/01 17:21:58 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.cpp"

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

		span.addNumber(-95);
		span.addNumber(500);
		span.addNumber(1);
		span.addNumber(898);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}


