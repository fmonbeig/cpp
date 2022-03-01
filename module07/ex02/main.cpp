/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:31:33 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/28 16:45:01 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string.h>

int main( void )
{
	Array<double> test(4);

	test[0] = 7;
	test[1] = 99;
	test[2] = 288;
	test[3] = -74;

	try
	{
		// std::cout << "valeur de array[-1] = " << test[-1] << std::endl;
		// std::cout << "valeur de array[59] = " << test[59] << std::endl;
		std::cout << "valeur de array[0] = " << test[0] << std::endl;
		std::cout << "valeur de array[3] = " << test[3] << std::endl;
		// std::cout << "valeur de array[4] = " << test[4] << std::endl;

		Array<double>  copy = test;

		std::cout << "valeur de copy[0] = " << copy[0] << std::endl;
		std::cout << "valeur de copy[3] = " << copy[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}
