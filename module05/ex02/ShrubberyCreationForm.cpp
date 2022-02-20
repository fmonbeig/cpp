/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/20 22:17:18 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
		Form(name, 145, 137)
	{
		std::cout << "**ShrubberyCreationForm is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL ShrubberyCreationForm 					        //
// +------------------------------------------+ //

	ShrubberyCreationForm::ShrubberyCreationForm(void):
		Form("unknow", 145, 137)
	{
		std::cout << "**Default ShrubberyCreationForm is created**" << std::endl;
	}

	ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &other):
		Form(other)
	{
	}

	ShrubberyCreationForm::~ShrubberyCreationForm(void)
	{
		std::cout << "**ShrubberyCreationForm is destroyed**" << std::endl;
	}

	ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
	{
		Form::operator=(rhs);
		return *this;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD							//
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, ShrubberyCreationForm const & rhs)
	{
		out <<"\e[1;37mShrubberyCreationForm : "  << rhs.getName() << "\nGrade required for signed : " << rhs.getGradeSign();
		out << "\nGrade required for execute : " << rhs.getGradeExecute() << "\nShrubberyCreationForm is \e[0m";
		if (rhs.getIsSigned())
			out << "\e[0;32msigned\e[0m" << std::endl;
		else
			out << "\e[0;31mnot signed\e[0m" << std::endl;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void ShrubberyCreationForm::execute(Bureaucrate const & executor) const
{
	std::cout << "Drawing a tree" << std::endl;
}

