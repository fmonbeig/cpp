/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:53:45 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/28 18:15:55 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	set_information();
		void	get_information() const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_darkest_secret;
		int 		_phone;

};

#endif
