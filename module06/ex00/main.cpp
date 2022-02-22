/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:09 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/22 18:01:05 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{

	// //utilisation de string to double strod
	// char poil[] = "a";
	// double dou = 40.4329479237489372894789237894;
	// char a = strtod(poil, NULL);
	// // int b = static_cast<int>(a);
	// int b = static_cast<int>(dou);
	// float x;
	// x = strtod(poil, NULL);

	// std::cout << x << std::endl;
	// std::cout << a << std::endl;

	if (argc == 2)
	{
		Conversion	convert(argv[1]);

		convert.printValues();
	}
	else
		std::cout << "Error: Only one argument is needed" << std::endl;
}


// Pour un char il faut parser et trouver le ' puis le dernier '
//float c est un 0.9f  (f a la fin)
// double c est juste des chifre avec un point au milieu
// trouver les valeurs numeriques pour double et Float (marquer inf si besoin)
// nan (not a number) nanf (float)
//
