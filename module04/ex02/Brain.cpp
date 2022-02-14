/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/14 17:34:58 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Brain::Brain(void)
	{ std::cout << "\e[0;35m**Hi! I'm the Brain **\e[0m" << std::endl; }

	Brain::Brain (const Brain &other)
	{
		int	i;

		i = -1;
		while (++i < 100)
			this->_ideas[i] = other._ideas[i];
	}

	Brain::~Brain(void)
	{ std::cout << "**Good luck without \e[0;35mme\e[0m !**" << std::endl; }

	Brain &Brain::operator=(const Brain & other)
	{
		int	i;

		i = -1;
		while (++i < 100)
			this->_ideas[i] = other._ideas[i];
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void	Brain::put_idea()
	{
		_ideas[0] = "Fetch a bone";
		_ideas[1] = "Hug my master";
		_ideas[2] = "Eat everytime I could";
	}

	void	Brain::get_idea()
	{
		std::cout << "\e[1;37m////////Brain Scan\\\\\\\\\\\\\\\\\\\e[0m" << std::endl;
		std::cout << _ideas[0] << std::endl;
		std::cout << _ideas[1] << std::endl;
		std::cout << _ideas[2] << std::endl << std::endl;;
	}

