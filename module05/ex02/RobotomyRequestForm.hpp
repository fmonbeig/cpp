/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 14:33:39 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
			RobotomyRequestForm();
			std::string	_target;

	public:
		//canonical fom
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & other );
		virtual ~RobotomyRequestForm();

		//overload operator
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		//other function
		virtual void execute(Bureaucrat const & executor) const;


};

#endif

