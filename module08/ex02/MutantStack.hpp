/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/07 12:44:07 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const std::stack<T> other): std::stack<T>(other) {}
		virtual ~MutantStack(){}
		// "c" est le nom du container de la stack (voir attribut membre dans la doc)
		MutantStack&	operator=(const std::stack<T> &rhs)
		{
			std::stack<T>::c.operator=(rhs);
			return *this;
		}
		// Comme on herite de stack on peut utiliser son container, pour connaitre son iterateur il faut utiliser les alias.
		// les typedef permettent de creer des alias a l interieur des classes
		// avec :: on peut faire appel au type de value / container etc... voir member type lors dans la doc

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }
		const_iterator begin(void) const { return this->c.begin(); }
		const_iterator end(void) const { return this->c.end(); }
		const_reverse_iterator rbegin(void) const { return this->c.rbegin(); }
		const_reverse_iterator rend(void) const { return this->c.rend(); }
		reverse_iterator rbegin(void) { return this->c.rbegin(); }
		reverse_iterator rend(void) { return this->c.rend(); }
};
#endif
