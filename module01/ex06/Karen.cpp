/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:08:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/03 16:12:50 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::complain( std::string level)
{
	int i;
	std::string lvl_tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
	{
		if (level.compare(lvl_tab[i]) == 0)
			break;
	}
	switch(i)
	{
		case 0 : this->debug();
		case 1 : this->info();
		case 2 : this->warning();
		case 3 : this->error(); break;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}

void	Karen::debug( void )
{
	std::cout << "\n\033[0;34mDEBUG\e[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "\n\033[0;34mINFO\e[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn't put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "\n\033[0;34mWARNING\e[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "\n\033[0;31mERROR\e[0m" << std::endl;
	std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
