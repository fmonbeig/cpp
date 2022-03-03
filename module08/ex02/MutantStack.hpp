/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:47 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/03/03 17:49:03 by fmonbeig         ###   ########.fr       */
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
		MutantStack(): std::stack<T> {}
		MutantStack(const std::stack<T> other): std::stack<T>(other) {}
		virtual ~MutantStack(){}
		MutantStack&	operator=(const std::stack<T> &rhs) // ici c est le nom du container de la stack (voir attribut membre dans la doc)
		{
			std::stack<T>::c.operator=(rhs);
			return *this;
		}
		// Comme on herite de stack on peut utiliser son container, pour connaitre son iterateur il faut utiliser les alias.
		// //Iterator
		auto begin()
		{ return (c.begin());}

		auto end()
		{ return (c.end());}

		// les typedef permettent de creer des alias a l interieur des classes
		// avec :: on peut faire appel au type de value / container etc... voir member type lors dans la doc

		// typedef typename std::stack<T>::container_type::iterator iterator;
        // typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        // typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        // typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        // iterator begin(void) { return this->c.begin(); }
        // iterator end(void) { return this->c.end(); }
        // const_iterator begin(void) const { return this->c.begin(); }
        // const_iterator end(void) const { return this->c.end(); }
        // reverse_iterator rbegin(void) { return this->c.rbegin(); }
        // reverse_iterator rend(void) { return this->c.rend(); }
        // const_reverse_iterator rbegin(void) const { return this->c.rbegin(); }
        // const_reverse_iterator rend(void) const { return this->c.rend(); }
};
#endif

// #ifndef MUTANTSTACK_HPP
// #define MUTANTSTACK_HPP

// #include <iostream>
// #include <string.h>
// #include <stdexcept>
// #include <algorithm>
// #include <deque>
// #include <iterator>

// template<typename T>
// class MutantStack
// {
// 	protected:
// 		std::deque<T> _stack;

// 	public:
// 		MutantStack() {}
// 		MutantStack(MutantStack const & other )
// 		{
// 			for (int i=0; i < other._span.size(); i++)
// 				_stack.push_back(other._stack[i]);
// 		}

// 		virtual ~MutantStack(){}

// 		MutantStack & operator=(MutantStack const & rhs)
// 		{
// 			for (int i=0; i < rhs._span.size(); i++)
// 				_stack.push_back(rhs._stack[i]);
// 		}

// 		//Element access
// 		const T &	top() const
// 		{ return (_stack.back()); }

// 		//Capacity
// 		bool	empty() const
// 		{ return(_stack.empty());}

// 		size_t size() const
// 		{ return(_stack.size());}

// 		//Modifiers

// 		void push(const T & value )
// 		{ _stack.push_back(value); }

// 		template< class... Args >
// 		void emplace( Args&&... args )
// 		{ _stack.emplace_back(std::forward<Args>(args)...); }

// 		void pop()
// 		{ _stack.pop_back(); }

// 		void swap( MutantStack& other )
// 		{ using std::swap; swap(_stack, other._stack); }

// 		// //Iterator
// 		auto begin()
// 		{ return (_stack.begin());}

// 		auto end()
// 		{ return (_stack.end());}
// };
// #endif
