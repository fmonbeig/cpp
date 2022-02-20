/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 18:26:05 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include "Form.hpp"

class Form; //TODO : comprendre pourquoi il faut absolument faire ca

class Bureaucrate
{
	protected:
		Bureaucrate();
		std::string	_name;
		int			_grade;

	public:
		//canonical fom
		Bureaucrate(std::string name, int grade);
		Bureaucrate(Bureaucrate const & other );
		virtual ~Bureaucrate();

		//overload operator
		Bureaucrate & operator=(Bureaucrate const & rhs);

		//get function
		std::string	getName() const;
		int			getGrade() const;

		//other function
		void	promotion();
		void	demotion();
		void	signForm(Form *form);

		// Except Class
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(); };

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw(); };

};

std::ostream &operator<<(std::ostream & out, Bureaucrate const & rhs);

#endif

