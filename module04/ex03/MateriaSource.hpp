/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/16 15:11:37 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string.h>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	protected:
		AMateria *_source[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & other );
		virtual ~MateriaSource();

		MateriaSource & operator=(MateriaSource const & other);

		void learnMateria(AMateria* materia) ;
		AMateria* createMateria(std::string const & type) ;
};

#endif
