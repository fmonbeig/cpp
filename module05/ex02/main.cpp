/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:30:05 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/20 22:18:48 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrate.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	 main()
{
	try
	{
		Bureaucrate					bob("Bob", 20);
		ShrubberyCreationForm		form("28c");
		std::cout << form;
		form.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

}
