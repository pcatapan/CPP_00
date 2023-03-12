/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:44:26 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/12 19:25:13 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phoneBook.hpp"

void    Contact::CreateContact(){
	
	std::cout << "Insert frist name of your new contact" << std::endl;
	std::cin >> name;

	std::cout << "Insert surname of your new contact" << std::endl;
	std::cin >> surname;
	
	std::cout << "Insert nickname of your new contact" << std::endl;
	std::cin >> nickname;

	std::cout << "Insert phone number of your new contact" << std::endl;
	std::cin >> phoneNumber;

	std::cout << "Insert darkest secret of your new contact" << std::endl;
	std::cin >> darkestSecret;

	std::cout << "The contact " << name << " " << surname << " is added" << std::endl; 
}

void    Contact::PrintInfoContact(int i){
	
	std::cout << i << std::setw(9) << " | ";
	if (name.length() > 10)
		std::cout << name.substr(0, 9) << "." <<  " | ";
	else
		std::cout << name << std::setw(10 - name.length()) << " | ";
	if (surname.length() > 10)
		std::cout << surname.substr(0, 9) << "." << " | ";
	else
		std::cout << surname << std::setw(10 - surname.length()) << " | ";
	if (nickname.length() > 10)
		std::cout << nickname.substr(0, 9) << "." << std::endl;
	else
		std::cout << nickname << std::setw(10 - nickname.length()) <<  std::endl;
}

int	Contact::SearchChecker(std::string searchWord){
	std::size_t found;

	found = name.find(searchWord);
	if (found!=std::string::npos)
		return 1;
	found = surname.find(searchWord);
	if (found!=std::string::npos)
		return 1;
	found = nickname.find(searchWord);
	if (found!=std::string::npos)
		return 1;
	return 0;
}