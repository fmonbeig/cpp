/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 15:04:27 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	PresidentialPardonForm::PresidentialPardonForm(std::string target):
		Form("Presidential Pardon", 25, 5), _target(target)
	{
		std::cout << "**PresidentialPardonForm is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL PresidentialPardonForm 			//
// +------------------------------------------+ //

	PresidentialPardonForm::PresidentialPardonForm(void):
		Form("Presidential Pardon", 25, 5), _target("unknow")
	{
		std::cout << "**Default PresidentialPardonForm is created**" << std::endl;
	}

	PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &other):
		Form(other)
	{}

	PresidentialPardonForm::~PresidentialPardonForm(void)
	{
		std::cout << "**PresidentialPardonForm is destroyed**" << std::endl;
	}

	PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
	{
		Form::operator=(rhs);
		return *this;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD							//
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, PresidentialPardonForm const & rhs)
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkExecution(executor);
	std::cout << _target << " have been pardoned by Zaphod Beeblebrox" << std::endl;

}

