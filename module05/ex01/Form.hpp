/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 15:47:23 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>

class Form
{
	protected:
		Form();
		std::string	_name;
		int			_grade;

	public:
		//canonical fom
		Form(std::string name, int grade);
		Form(Form const & other );
		virtual ~Form();

		//overload operator
		Form & operator=(Form const & rhs);

		//get function
		std::string	getName() const;
		int			getGrade() const;

		//other function
		void	promotion();
		void	demotion();

		// Except Class
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(); };

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw(); };

};

std::ostream &operator<<(std::ostream & out, Form const & rhs);

#endif

