/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:26:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/28 18:14:01 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone.hpp"

Phone_book::Phone_book(void) : nb(0)
{
	std::cout << "Constructor called (phone_book)" << std::endl;
	return ;
}

Phone_book::~Phone_book(void)
{
	std::cout << "Destructor called (phone_book)" << std::endl;
	return ;
}

void Phone_book::exit(void)
{
	_Exit(0);
}

void Phone_book::add(void)
{
	if (nb == 8)
	{
		std::cout << "You already have 8 contact" << std::endl;
		return ;
	}
	contact[nb].set_information();
	nb++;
	return ;
}

void Phone_book::search(void)
{
			std::cout << "WORK IN PROGRESS" << std::endl;

}
