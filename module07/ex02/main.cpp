/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:31:33 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 11:36:19 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string.h>

int main( void )
{
	std::cout << "\nTEST WITH STRING" << std::endl;
	Array<std::string> array(5);

	for (int i = 0; i < 5; i++)
	{
		array[i] = std::string("Hello" + std::to_string(i));
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	std::cout << "\nSTRING COPY TEST" << std::endl;
	Array<std::string> array2;

	array2 = array;

	for (int i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}


	std::cout << "\nTEST WITH DOUBLE" << std::endl;
	Array<double> test(4);

	test[0] = 7;
	test[1] = 99;
	test[2] = 288;
	test[3] = -74;

	try
	{
		std::cout << "valeur de array[0] = " << test[0] << std::endl;
		std::cout << "valeur de array[3] = " << test[3] << std::endl;

		std::cout << "\nDOUBLE COPY TEST" << std::endl;
		Array<double>  copy = test;

		std::cout << "valeur de copy[0] = " << copy[0] << std::endl;
		std::cout << "valeur de copy[3] = " << copy[3] << std::endl;
		std::cout << "\nINVALID INDEX TEST" << std::endl;
		std::cout << "valeur de copy[4] = " << copy[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
