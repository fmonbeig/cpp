/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:17:08 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/03 15:36:17 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc == 2)
		karen.complain(argv[1]);
	else
		std::cout << "Only one Parameter is required" << std::endl;
	return (0);
}
