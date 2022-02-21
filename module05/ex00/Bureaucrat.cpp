/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 11:34:47 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
	{
		if (_grade <= 0)
				throw GradeTooHighException();
		if (_grade > 150)
				throw GradeTooLowException();
		std::cout << "**Bureaucrat is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Bureaucrat::Bureaucrat(void): _name("unknow"), _grade(150)
	{
		std::cout << "**Default Bureaucrat is created**" << std::endl;
	}

	Bureaucrat::Bureaucrat (const Bureaucrat &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}

	Bureaucrat::~Bureaucrat(void)
	{
		std::cout << "**Bureaucrat is destroyed**" << std::endl;
	}

	Bureaucrat &Bureaucrat::operator=(const Bureaucrat & rhs)
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

	std::ostream &operator<<(std::ostream & out, Bureaucrat const & rhs)
	{
		out <<"\e[1;37m" << rhs.getName() << ", bureaucrat " << rhs.getGrade() << ".\e[0m" ;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

		std::string	Bureaucrat::getName() const
		{	return (this->_name); }

		int	Bureaucrat::getGrade() const
		{	return (this->_grade); }

		void	Bureaucrat::promotion()
		{
			--this->_grade;
			if (_grade <= 0)
				throw GradeTooHighException();
		}

		void	Bureaucrat::demotion()
		{
			++this->_grade;
			if (_grade > 150)
				throw GradeTooLowException();
		}

// +------------------------------------------+ //
//   EXCEPTION CLASS FUNCTION			        //
// +------------------------------------------+ //

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\e[0;31mGrade is too high\e[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\e[0;31mGrade is too low\e[0m");
}
