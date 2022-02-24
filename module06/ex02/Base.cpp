/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/24 12:03:13 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::~Base(void)
{}

Base *generate(void)
{
	int i;

	srand (time(NULL));
	i = rand() % 3 + 1;

	switch(i)
	{
		case 1: std::cout << "\e[1;37mClass A\e[0m have been created\n" ; return new A; break;
		case 2: std::cout << "\e[1;37mClass B\e[0m have been created\n" ; return new B; break;
		case 3: std::cout << "\e[1;37mClass C\e[0m have been created\n" ; return new C; break;
	}
	return (NULL);
}

void	identify(Base* p) // return NULL when Dynamic cast on a pointer failed
{
	std::cout << "\e[0;33m===== Check type by Pointer =====\n\e[0m";

		A	*tempA = dynamic_cast<A*>(p);
		if (tempA)
			std::cout << "\e[1;31m	It's an A\n\e[0m";
		else
		{
			B	*tempB = dynamic_cast<B*>(p);
			if (tempB)
				std::cout << "\e[1;31m	It's a B\n\e[0m";
			else
			{
				C	*tempC = dynamic_cast<C*>(p);
				if (tempC)
					std::cout << "\e[1;31m	It's a C\n\e[0m";
				else
				{
					std::cout << "\e[1;31m	Class unknown\n\e[0m";
				}
			}
		}


}

void	identify(Base& p) // return an exception when Dynamic cast on a reference failed
{
	std::cout << "\e[1;34m===== Check type by Reference =====\n\e[0m";
	try
	{
		A	tempA = dynamic_cast<A&>(p);
		std::cout << "\e[1;31m	It's an A\n\e[0m";
	}
	catch(const std::exception &e)
	{
		try
		{
			B	tempB = dynamic_cast<B&>(p);
			std::cout << "\e[1;31m	It's a B\n\e[0m";
		}
		catch(const std::exception &e)
		{
			try
			{
				C	tempC = dynamic_cast<C&>(p);
				std::cout << "\e[1;31m	It's a C\n\e[0m";
			}
			catch(const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}
