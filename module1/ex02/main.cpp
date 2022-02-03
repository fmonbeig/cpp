/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:12:12 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/02 11:24:19 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string		brain;
	std::string		*brainPTR;
	std::string&	brainREF = brain;

	brain = "HI THIS IS BRAIN";
	brainPTR = &brain;

	std::cout << "\033[0;34m**************ADRESS*******************\e[0m" << std::endl ;
	std::cout << "\nadresse de brain:              " << &brain << std::endl ;
	std::cout << "adresse stockée dans brainPTR: " << brainPTR << std::endl ;
	std::cout << "adresse stockée dans brainREF: " << &brainREF << std::endl ;

	std::cout << "\n\033[1;33m**************VALUE********************\e[0m" << std::endl ;
	std::cout << "\nvaleur de brain:              " << brain << std::endl ;
	std::cout << "valeur pointée dans brainPTR: " << *brainPTR << std::endl ;
	std::cout << "valeur pointée dans brainREF: " << brainREF << std::endl ;


	return (0);
}
