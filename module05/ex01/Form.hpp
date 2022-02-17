/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 18:22:16 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Bureaucrate.hpp"

class Bureaucrate;

class Form
{
		private:
			Form();
			std::string	_name;
			const int	_sign;
			const int	_execute;
			bool		_isSigned;

	public:
		//canonical fom
		Form(std::string name, const int sign, const int execute);
		Form(Form const & other );
		virtual ~Form();

		//overload operator
		Form & operator=(Form const & rhs);

		//get function
		std::string	getName() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		int			getIsSigned() const;

		//other function

		void		BeSigned(Bureaucrate & b);

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

