/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:52:51 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/12 19:24:30 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact{

    private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	public :
	void    CreateContact(void);
	void    PrintInfoContact(int i);
	int     SearchChecker(std::string searchWord);
	

};

#endif