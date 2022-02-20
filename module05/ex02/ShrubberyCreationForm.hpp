/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/20 22:16:39 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Bureaucrate.hpp"
#include "Form.hpp"

class Bureaucrate; //FIXME pourquoi est on obligê de faire ca ??

class ShrubberyCreationForm : public Form
{
	private:
			ShrubberyCreationForm();

	public:
		//canonical fom
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const & other );
		virtual ~ShrubberyCreationForm();

		//overload operator
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		//other function
		virtual void execute(Bureaucrate const & executor) const;


};

#endif

