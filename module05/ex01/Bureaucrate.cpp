/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/17 15:42:09 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrate.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	Bureaucrate::Bureaucrate(std::string name, int grade): _name(name), _grade(grade)
	{
		if (_grade <= 0)
				throw GradeTooHighException();
		if (_grade > 150)
				throw GradeTooLowException();
		std::cout << "**Bureaucrate is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	Bureaucrate::Bureaucrate(void): _name("unknow"), _grade(150)
	{
		std::cout << "**Default Bureaucrate is created**" << std::endl;
	}

	Bureaucrate::Bureaucrate (const Bureaucrate &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}

	Bureaucrate::~Bureaucrate(void)
	{
		std::cout << "**Bureaucrate is destroyed**" << std::endl;
	}

	Bureaucrate &Bureaucrate::operator=(const Bureaucrate & rhs)
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

	std::ostream &operator<<(std::ostream & out, Bureaucrate const & rhs)
	{
		out <<"\e[1;37m" << rhs.getName() << ", bureaucrat " << rhs.getGrade() << ".\e[0m" ;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

		std::string	Bureaucrate::getName() const
		{	return (this->_name); }

		int	Bureaucrate::getGrade() const
		{	return (this->_grade); }

		void	Bureaucrate::promotion()
		{
			--this->_grade;
			if (_grade <= 0)
				throw GradeTooHighException();
		}

		void	Bureaucrate::demotion()
		{
			++this->_grade;
			if (_grade > 150)
				throw GradeTooLowException();
		}

// +------------------------------------------+ //
//   EXCEPTION CLASS FUNCTION			        //
// +------------------------------------------+ //

const char* Bureaucrate::GradeTooHighException::what() const throw()
{
	return ("\e[0;31mError : Grade is too high\e[0m");
}

const char* Bureaucrate::GradeTooLowException::what() const throw()
{
	return ("\e[0;31mError : Grade is too low\e[0m");
}

