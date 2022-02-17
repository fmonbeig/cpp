/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:30:05 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 15:37:42 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrate.hpp"

int	 main()
{
	try
	{
		Bureaucrate bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.demotion();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrate Franck("Franck", 149);
		std::cout << Franck << std::endl;
		Franck.demotion();
		Franck.demotion();
		Franck.demotion();
		std::cout << Franck << std::endl;
		Franck.demotion();
		Franck.demotion();
		Franck.demotion();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrate Flo("Flo", 2);
		std::cout << Flo << std::endl;
		Flo.promotion();
		Flo.promotion();
		Flo.promotion();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrate Flo("Flo", 151);
		std::cout << Flo << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrate Flo("Flo", 0);
		std::cout << Flo << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
