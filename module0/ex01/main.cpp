/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:19:35 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/01 10:50:40 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phone.hpp"
#include "Contact.hpp"

void do_cmd(std::string user_cmd, Phone_book *N3310)
{
	if (user_cmd.compare("EXIT") == 0)
	{
		std::cout << "\e[35mGood bye\e[0m" << std::endl;
		N3310->exit();
	}
	else if (user_cmd.compare("ADD") == 0)
		N3310->add();
	else if (user_cmd.compare("SEARCH") == 0)
		N3310->search();
	else
		std::cout << "\033[0;31mYour command doesn't exist\033[0m" << std::endl;
	std::cout << std::endl;
}

int	main ()
{
	Phone_book	N3310;
	std::string	user_cmd;

	std::cout << "+++*** NOKIA 3310 PHONE BOOK ***+++" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Please select an option :" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl << std::endl;
		std::getline(std::cin, user_cmd);
		do_cmd(user_cmd, &N3310);
	}
	return (0);
}
