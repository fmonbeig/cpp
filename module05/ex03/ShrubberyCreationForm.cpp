/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/21 14:28:49 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// +------------------------------------------+ //
//   CONSTRUCTOR OVERLOAD 					    //
// +------------------------------------------+ //

	ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
		Form("Shrubbery", 145, 137), _target(target)
	{
		std::cout << "**ShrubberyCreationForm is created**" << std::endl;
	}

// +------------------------------------------+ //
//   CANONICAL ShrubberyCreationForm 			//
// +------------------------------------------+ //

	ShrubberyCreationForm::ShrubberyCreationForm(void):
		Form("Shrubbery", 145, 137), _target("unknow")
	{
		std::cout << "**Default ShrubberyCreationForm is created**" << std::endl;
	}

	ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &other):
		Form(other)
	{}

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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string outFileName;

	checkExecution(executor);
	outFileName = this->_target + "_shruberry";
	std::ofstream	outfile(outFileName.c_str());
	if(outfile.fail())
	{
		std::cerr << "ERROR: Can't create the file\n";
		return ;
	}
	outfile << "#(#########((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((("<< std::endl;
	outfile << "(#((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((//////"<< std::endl;
	outfile << "(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((/////////////////"<< std::endl;
	outfile << "(((((((((((((((((((((((((((((((#((#%%%((((#&##/(((((////////////////////////////"<< std::endl;
	outfile << "((((((((((((((((((((((((%%#%%%#@%(##(%&&&%##((/(%#(/////////*,,****//***////////"<< std::endl;
	outfile << "((((((((((((((((((((((#(#(%#(%&((/(#%&#%@#&&%%&&&%/((#(///////////****,,,,**/***"<< std::endl;
	outfile << "(((((((((((((((/(((#%(%%%%&%#(@@&&#&&(&&&(#&@#&/&&%@#%&//////*****,,,*********,*"<< std::endl;
	outfile << "((((//////////////(##&&&#%#@@&%(#%#%#%&&@@@&&&&&&&%#(##%////*****//****/********"<< std::endl;
	outfile << "*//***/**,//****///(#%#&%&%&&@@(&/&@@@@&#/(&@(&#*&&(%#&&/%/*********************"<< std::endl;
	outfile << "******,,,,,,,,,,,,*%%&&&&&@%&(%%@(%&&@#%&(&&#%(#&%##%##&&%%#(*******************"<< std::endl;
	outfile << "****************(#((&*%*(&%#%&%&###&%&#&*&@&@&&&#%&&&###&#&/****************,.,,"<< std::endl;
	outfile << "*/*//*////******(&((((%&%%&/%%@#&@@((&%@/&%(#&@#&((&&%&&%&#&&******************,"<< std::endl;
	outfile << "**************,***(%&&%#&%@%&#@@%/%&(%/(&&&@@#&%/&&&&&&#%.(&........,,,,,,,,,,,,"<< std::endl;
	outfile << "*****,********,,,*#%#%%&%%%%@&#%%&/%#%&#&%%(@&#@@&@((%%&&((&               ....."<< std::endl;
	outfile << "*,,,,****,*****,,#%%&##%%%&@&@%(%&&&&/&(%%#/%&@&&&&%%/#%&&# (                  ."<< std::endl;
	outfile << "......... .  ....##/(&&&%&%/#/,,#%&&&&&%&@&(&#&%&&&(...//("						 << std::endl;
	outfile << "....,,,,,.................., ... .....*&&&#,##(....*....,,. ...................."<< std::endl;
	outfile << ",,,,,,,,,,,,,,,,,.,,,,,,.....,.........&&%......................................"<< std::endl;
	outfile << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,&&&,,,,,,,,,,,,,,..................,,,.,,"<< std::endl;
	outfile << "###%####%###(########(######%#(##########(####(##(###((((((((((((((((((((((((###"<< std::endl;
	outfile << "%##%#%#(#%(#%#######%%%##(#######(##(##(#(#####(#######(#((#(#(##(#/(((###((#((( "<< std::endl;
}

