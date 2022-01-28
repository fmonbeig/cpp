/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:53:36 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/28 18:22:10 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called (contact)" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called (contact)" << std::endl;
	return ;
}

void Contact::set_information() // souci sur les telephone
{
	std::cout << "\n\e[1;37mFirst Name: \e[0m" << std::endl;
	std::cin >> _first_name;
	std::cout << "\n\e[1;37mLast Name: \e[0m";
	std::getline(std::cin, _last_name);
	std::cout << "\n\e[1;37mNick Name: \e[0m";
	std::getline(std::cin, _nick_name);
	std::cout << "\n\e[1;37mDarket Secret: \e[0m";
	std::getline(std::cin, _darkest_secret);
	// std::cout << "\n\e[1;37mPhone number: \e[0m";
	// std::getline(std::cin, _phone);
}

void Contact::get_information() const
{
	std::cout << _first_name << std::endl;
}
