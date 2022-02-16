/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 17:49:58 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// +------------------------------------------+ //
//   CANONICAL FORM 					        //
// +------------------------------------------+ //

	MateriaSource::MateriaSource(void)
	{
		int	i;

		for(i = 0; i < 4; i++)
			_source[i] = NULL;
		std::cout << "**A MateriaSource is created**" << std::endl;
	}

	MateriaSource::MateriaSource (const MateriaSource &other)
	{
		int	i;

		for (i = 0; i < 4; i++)
		{
			if (other._source[i] != NULL)
			{
				delete _source[i];
				_source[i] = other._source[i]->clone();
			}
		}
	}

	MateriaSource::~MateriaSource(void)
	{
		int	i;

		for(i = 0; i < 4; i++)
		{
			if (_source[i] != NULL)
				delete _source[i];
		}
		std::cout << "**A MateriaSource is destroyed**" << std::endl;
	}

	MateriaSource &MateriaSource::operator=(const MateriaSource & other)
	{
		int	i;

		for (i = 0; i < 4; i++)
		{
			if (other._source[i] != NULL)
			{
				delete _source[i];
				_source[i] = other._source[i]->clone();
			}
		}
		return *this;
	}

// +------------------------------------------+ //
//   MEMBER FUNCTION					        //
// +------------------------------------------+ //

	void MateriaSource::learnMateria(AMateria* materia)
	{
		int	i;

		for (i = 0; i < 4 && materia != NULL; i++)
		{
			if (_source[i] == NULL)
			{
				_source[i] = materia;
				break ;
			}
		}
		if (i >= 4)
			delete materia;
	}

	AMateria* MateriaSource::createMateria(std::string const & type)
	{
		int	i;

		for (i = 0; i < 4 && _source[i] != NULL ; i++)
		{
			if (_source[i]->getType().compare(type) == 0)
				return (_source[i]->clone());
		}
		return (0);
	}
