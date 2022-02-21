/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 12:05:30 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Form.hpp"

class Form; //TODO : comprendre pourquoi il faut absolument faire ca

class Bureaucrat
{
	protected:
		Bureaucrat();
		std::string	_name;
		int			_grade;

	public:
		//canonical fom
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & other );
		virtual ~Bureaucrat();

		//overload operator
		Bureaucrat & operator=(Bureaucrat const & rhs);

		//get function
		std::string	getName() const;
		int			getGrade() const;

		//other function
		void	promotion();
		void	demotion();
		void	signForm(Form *form);
		void	executeForm(Form const & form);

		// Except Class
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(); };

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw(); };

};

std::ostream &operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif

