/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:26:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/28 17:49:04 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

#include <iostream>
#include "Contact.hpp"

class Phone_book
{
	public:

		Phone_book(void);
		~Phone_book(void);

		void	exit(void);
		void	add(void);
		void	search(void);

	private:
		Contact contact[8];
		int nb;
};

#endif
