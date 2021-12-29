/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:19:35 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/12/29 18:18:45 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phone.class.hpp"

void do_cmd(std::string user_cmd, Phone_book *N3310)
{
	if (user_cmd.compare("EXIT") == 0)
	{
		std::cout << "Good bye" << std::endl;
		N3310->exit();
	}
	else if (user_cmd.compare("ADD") == 0)
		std::cout << "You choose ADD" << std::endl;
	else if (user_cmd.compare("SEARCH") == 0)
		std::cout << "you choose SEARCH" << std::endl;
	else
		std::cout << "Your command doesn't exist" << std::endl;
	std::cout << std::endl;
}

int main ()
{
	Phone_book *N3310;
	std::string user_cmd;

	std::cout << "+++*** NEW NOKIA 3310 PHONE BOOK ***+++" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Please select an option :" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl << std::endl;
		std::cin >> user_cmd;
		do_cmd(user_cmd, N3310);
	}
	return (0);
}
