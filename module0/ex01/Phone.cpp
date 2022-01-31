/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:26:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/31 15:34:23 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone.hpp"

Phone_book::Phone_book(void) : _nb(0)
{
	return ;
}

Phone_book::~Phone_book(void)
{
	return ;
}

void Phone_book::exit(void) const
{
	std::exit(0);
}

void Phone_book::add(void)
{
	if (_nb == 8)
	{
		std::cout << "\033[0;31mYou already have 8 contact\e[0m" << std::endl;
		return ;
	}
	_contact[_nb].set_information();
	_nb++;
	return ;
}

static void	index_selection(int nb, const Contact contact[8])
{
	int	index;
	int	i;

	while (1)
	{
		while (std::cout << "\nSelect an index\n" && !(std::cin >> index))
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "\033[0;31mInvalid input\e[0m\n";
		}
		i = 0;
		while(i++ < nb && index > 0)
		{
			if(i == index)
			{
				contact[i - 1].get_coordonate_of_one_contact();
				std::cin.ignore();
				return ;
			}
		}
		std::cout << "\033[0;31mIndex unrecognized\e[0m" << std::endl;
	}
}

void Phone_book::search(void) const
{
	int i;

	i = -1;
	if (_nb > 0)
	{
		std::cout << "\n\033[0;32m********************************************\n\e[0m";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << "INDEX" << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << "FIRST NAME" << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << "LAST NAME" << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << "NICK NAME";
		while (++i < _nb)
		{
			std::cout << std::endl;
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << i + 1 << "|";
			_contact[i].get_information();
		}
		std::cout << "\n\033[0;32m********************************************\n\e[0m";
		index_selection(_nb, _contact);
	}
	else
		std::cout << "\033[0;31mPhone Book is empty\e[0m" << std::endl;
}
