/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:48:44 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/12 18:02:23 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook{

	private:
		Contact contacts[8];
		int		numberContact;
		int		oldContact;
	
	public :
		void 		StartPhoneBook();
		std::string GetCommand();
		void		DelOldContact(int oldContact);
		void		AddContact();
		void		SearchContact();
		void		Exit();
};

#endif