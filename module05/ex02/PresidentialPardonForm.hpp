/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 13:56:59 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
			PresidentialPardonForm();
			std::string	_target;

	public:
		//canonical fom
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & other );
		virtual ~PresidentialPardonForm();

		//overload operator
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		//other function
		virtual void execute(Bureaucrat const & executor) const;


};

#endif

