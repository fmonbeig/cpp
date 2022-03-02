/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/02 18:00:20 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Form::Form(const std::string name, const int sign, const int execute):
		_name(name), _sign(sign), _execute(execute), _isSigned(0)
	{
		if (_sign <= 0 || _execute <= 0)
				throw GradeTooHighException();
		if (_sign > 150 || _execute > 150)
				throw GradeTooLowException();
		std::cout << "**Form is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Form::Form(void):
	_name("unknown"), _sign(150), _execute(150), _isSigned(0)
	{
		std::cout << "**Default Form is created**" << std::endl;
	}

	Form::Form (const Form &other):
	_sign(other._sign), _execute(other._execute),
	_name(other._name), _isSigned(other._isSigned)
	{}

	Form::~Form(void)
	{
		std::cout << "**Form is destroyed**" << std::endl;
	}

	Form &Form::operator=(const Form & rhs)
	{
		if (this != &rhs)
		{
			this->_isSigned = rhs._isSigned;
		}
		return *this;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD					        //
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, Form const & rhs)
	{
		out <<"\e[1;37mForm : "  << rhs.getName() << "\nGrade required for signed : " << rhs.getGradeSign();
		out << "\nGrade required for execute : " << rhs.getGradeExecute() << "\nForm is \e[0m";
		if (rhs.getIsSigned())
			out << "\e[0;32msigned\e[0m" << std::endl;
		else
			out << "\e[0;31mnot signed\e[0m" << std::endl;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

		std::string	Form::getName() const
		{	return (this->_name); }

		int	Form::getGradeSign() const
		{	return (this->_sign); }

		int	Form::getGradeExecute() const
		{	return (this->_execute); }

		int	Form::getIsSigned() const
		{	return (this->_isSigned); }

		void	Form::BeSigned(Bureaucrat & b)
		{
			if (b.getGrade() > this->_sign)
				throw GradeTooLowException();
			if (this->_isSigned == 0)
				this->_isSigned = 1;
		}

		void	Form::checkExecution(Bureaucrat const & b) const
		{
			if (b.getGrade() > this->_execute)
				throw GradeTooLowException();
			if (this->_isSigned == 0)
				throw FormIsNotSign();
		}

// +------------------------------------------+ //
//   EXCEPTION CLASS FUNCTION			        //
// +------------------------------------------+ //

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\e[0;31mGrade is too high\e[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\e[0;31mGrade is too low\e[0m");
}

const char* Form::FormIsNotSign::what() const throw()
{
	return ("\e[0;31mForm is not sign\e[0m");
}

