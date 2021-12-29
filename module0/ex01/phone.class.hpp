/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:26:18 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/12/29 17:23:09 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

class Contact
{
	public:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int 		phone;
		std::string	darkest_secret;

		Contact(void);
		~Contact(void);
};

class Phone_book
{
	public:

		Contact contact[8];
		Phone_book(void);
		~Phone_book(void);

		void	exit(void);
};

#endif
