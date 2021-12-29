/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:26:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/12/29 17:53:55 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phone.class.hpp"

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


Phone_book::Phone_book(void)
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
