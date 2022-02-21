/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 17:15:44 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Intern::Intern(void)
	{
		std::cout << "**Intern is created**" << std::endl;
	}

	Intern::Intern (const Intern &other)
	{}

	Intern::~Intern(void)
	{
		std::cout << "**Intern is destroyed**" << std::endl;
	}

	Intern &Intern::operator=(const Intern & rhs)
	{
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	Form* Intern::Robotomy(std::string targetForm)
	{
		return new RobotomyRequestForm(targetForm);
	}

	Form* Intern::Presidential(std::string targetForm)
	{
		return new PresidentialPardonForm(targetForm);
	}

	Form* Intern::Shrubberry(std::string targetForm)
	{
		return new ShrubberyCreationForm(targetForm);
	}

	Form* Intern::makeForm(std::string nameForm, std::string targetForm)
	{
		int	i;
		std::string lvl_tab[] = {"robotomy request", "shruberry creation", "presidential pardon"};
		Form* (Intern::*lvl_ptr[3])(std::string targetForm)=
		{
			lvl_ptr[0] = &Intern::Robotomy,
			lvl_ptr[1] = &Intern::Presidential,
			lvl_ptr[2] = &Intern::Shrubberry,
		};

		i = -1;
		while (++i < 3)
		{
			if (nameForm.compare(lvl_tab[i]) == 0)
				return ( (this->*lvl_ptr[i])(targetForm) );
		}
		std::cerr << "\e[0;31mForm doesn't exist\e[0m" << std::endl;
		return (NULL);
	}


