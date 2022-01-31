/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:53:36 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/31 15:28:02 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

static void print_string(std::string str)
{
	std::string temp;

	temp = str;
	if (temp.length() > 10)
	{
		temp.resize(10);
		temp.replace(9, 1, 1, '.');
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << temp << "|";
}


void Contact::set_information()
{
	std::cout << "\n\033[0;34mFirst Name:\e[0m";
	std::getline(std::cin, _first_name);
	std::cout << "\n\033[0;34mLast Name: \e[0m";
	std::getline(std::cin, _last_name);
	std::cout << "\n\033[0;34mNick Name: \e[0m";
	std::getline(std::cin, _nick_name);
	std::cout << "\n\033[0;34mDarket Secret: \e[0m";
	std::getline(std::cin, _darkest_secret);
	std::cout << "\n\033[0;34mPhone number: \e[0m";
	std::getline(std::cin, _phone);
}

void Contact::get_information() const
{
	print_string(_first_name);
	print_string(_last_name);
	print_string(_nick_name);
}

void Contact::get_coordonate_of_one_contact() const
{
	std::cout << "\n\033[1;33m******************************\n\e[0m";
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " <<_last_name << std::endl;
	std::cout << "Nick Name: " <<_nick_name << std::endl;
	std::cout << "\e[35mDarkest secret:\e[0m " <<_darkest_secret << std::endl;
	std::cout << "Phone: " <<_phone << std::endl;
	std::cout << "\033[1;33m******************************\n\e[0m";
}
