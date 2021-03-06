/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:09 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/23 17:42:02 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Conversion	convert(argv[1]);
		convert.printValues();
	}
	else
		std::cout << "Error: Only one argument is needed" << std::endl;
}
