/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 15:01:54 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	RobotomyRequestForm::RobotomyRequestForm(std::string target):
		Form("Robotomy", 72, 45), _target(target)
	{
		std::cout << "**RobotomyRequestForm is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL RobotomyRequestForm 			//
// +------------------------------------------+ //

	RobotomyRequestForm::RobotomyRequestForm(void):
		Form("Robotomy", 72, 45), _target("unknow")
	{
		std::cout << "**Default RobotomyRequestForm is created**" << std::endl;
	}

	RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &other):
		Form(other)
	{}

	RobotomyRequestForm::~RobotomyRequestForm(void)
	{
		std::cout << "**RobotomyRequestForm is destroyed**" << std::endl;
	}

	RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
	{
		Form::operator=(rhs);
		return *this;
	}

// +------------------------------------------+ //
//   OPERATOR OVERLOAD							//
// +------------------------------------------+ //

	std::ostream &operator<<(std::ostream & out, RobotomyRequestForm const & rhs)
	{
		out <<"\e[1;37mForm: "  << rhs.getName() << "\nGrade required for signed : " << rhs.getGradeSign();
		out << "\nGrade required for execute : " << rhs.getGradeExecute() << "\nFormis \e[0m";
		if (rhs.getIsSigned())
			out << "\e[0;32msigned\e[0m" << std::endl;
		else
			out << "\e[0;31mnot signed\e[0m" << std::endl;
		return out;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	i;

	srand (time(NULL));
	checkExecution(executor);
	std::cout << "BBZZ BBZZZZZZZZZZZzzzzz *sproch*" << std::endl;
	i = rand() % 2 + 1;
	if (i == 1)
		std::cout << _target << " have been Robotomize" << std::endl;
	else
		std::cout << "Robotomize Failed: "<< _target << " have run away" << std::endl;

}

