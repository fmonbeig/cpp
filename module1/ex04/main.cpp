/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:30:01 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/03 18:26:09 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

//std::string::npos est la valeur de retour quand ca ne match pas

static void	ft_replace(std::ifstream& file, std::string s1, std::string s2, std::string OutfileName)
{
	std::string		line;
	std::ofstream	outfile(OutfileName.c_str());
	size_t			pos;
	size_t			i;

	if (s1.empty())
	{
		std::cerr << "String 1 is empty\n";
		return ;
	}
	if(outfile.fail())
	{
			std::cerr << "Can't create the file\n";
			return ;
	}
	while(getline(file, line))
	{
		i = 0;
		while ((pos = line.find(s1, i)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			i = pos + s2.length();
		}
		outfile << line << std::endl;
	}
	outfile.close();
}

std::string	generate_outfile_name(char **argv)
{
	std::string	FileName;
	std::string	OutfileName;
	std::string	temp;

	FileName = argv[1];
	temp = ".replace";
	OutfileName = FileName + temp;
	return (OutfileName);
}

int main(int argc, char **argv)
{
	std::string	FileName;
	std::string	OutfileName;
	std::string	s1;
	std::string	s2;

	if (argc == 4)
	{
		FileName = argv[1];
		OutfileName = generate_outfile_name(argv);
		std::ifstream file(FileName.c_str());
		if(file.fail())
		{
			std::cerr << "Can't open the file\n";
			return 1;
		}
		s1 = argv[2];
		s2 = argv[3];
		ft_replace(file, s1, s2, OutfileName);
		file.close();
	}
	else
		std::cout << "Not the right number of argument" << std::endl;
	return (0);
}
