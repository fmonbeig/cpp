/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 15:47:38 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Form::Form(std::string name, int grade): _name(name), _grade(grade)
	{
		if (_grade <= 0)
				throw GradeTooHighException();
		if (_grade > 150)
				throw GradeTooLowException();
		std::cout << "**Form is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Form::Form(void): _name("unknow"), _grade(150)
	{
		std::cout << "**Default Form is created**" << std::endl;
	}

	Form::Form (const Form &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}

	Form::~Form(void)
	{
		std::cout << "**Form is destroyed**" << std::endl;
	}

	Form &Form::operator=(const Form & rhs)
	{
		if (this != &rhs)
		{
			this->_name = rhs._name;
			this->_grade = rhs._grade;
		}
		return *this;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD					        //
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, Form const & rhs)
	{
		out <<"\e[1;37m" << rhs.getName() << ", bureaucrat " << rhs.getGrade() << ".\e[0m" ;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

		std::string	Form::getName() const
		{	return (this->_name); }

		int	Form::getGrade() const
		{	return (this->_grade); }

		void	Form::promotion()
		{
			--this->_grade;
			if (_grade <= 0)
				throw GradeTooHighException();
		}

		void	Form::demotion()
		{
			++this->_grade;
			if (_grade > 150)
				throw GradeTooLowException();
		}

// +------------------------------------------+ //
//   EXCEPTION CLASS FUNCTION			        //
// +------------------------------------------+ //

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\e[0;31mError : Grade is too high\e[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\e[0;31mError : Grade is too low\e[0m");
}

