/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:30:05 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 17:12:53 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	 main()
{
	try
	{
		Bureaucrat	bob("Bob", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy requestdjfkdjk", "Bender");
		if (rrf)
		{
			std::cout << *rrf;
			std::cout << std::endl;
			bob.signForm(rrf);
			std::cout << std::endl;
			bob.executeForm(*rrf);
		}
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	bob("Bob", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			std::cout << *rrf;
			std::cout << std::endl;
			bob.signForm(rrf);
			std::cout << std::endl;
			bob.executeForm(*rrf);
		}
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
		try
	{
		Bureaucrat	bob("Bob", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			std::cout << *rrf;
			std::cout << std::endl;
			bob.signForm(rrf);
			std::cout << std::endl;
			bob.executeForm(*rrf);
		}
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
		try
	{
		Bureaucrat	bob("Bob", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shruberry creation", "Bender");
		if (rrf)
		{
			std::cout << *rrf;
			std::cout << std::endl;
			bob.signForm(rrf);
			std::cout << std::endl;
			bob.executeForm(*rrf);
		}
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;



}
