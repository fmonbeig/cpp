/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:31:33 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/24 17:01:04 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main( void )
{
	int tab[] = {1, 2, 3, 4 ,5};
	int i = 5;

	std::cout << "\e[0;33mTab Before adding 42 (INT)\e[0m" << std::endl;
	iter(tab, i, printTab);
	iter(tab, i, add42);
	std::cout << "\e[0;32mTab After adding 42(INT)\e[0m" << std::endl;
	iter(tab, i, printTab);

	double tab2[] = {1.56, 2.34, 3.1222, 4.9898 ,5.27};
	double ii = 5;

	std::cout << "\e[0;33mTab Before adding 42(DOUBLE)\e[0m" << std::endl;
	iter(tab2, ii, printTab);
	iter(tab2, ii, add42);
	std::cout << "\e[0;32mTab After adding 42(DOUBLE)\e[0m" << std::endl;
	iter(tab2, ii, printTab);
	return (0);
}
