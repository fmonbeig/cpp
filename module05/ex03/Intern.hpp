/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 16:34:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private :
		Form	*Robotomy(std::string targetForm);
		Form	*Presidential(std::string targetForm);
		Form	*Shrubberry(std::string targetForm);

	public:
		//canonical fom
		Intern();
		Intern(Intern const & other );
		virtual ~Intern();

		//Overload operator
		Intern & operator=(Intern const & other);

		//other function
		Form	*makeForm(std::string nameForm, std::string targetForm);
};

#endif
