/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:44:26 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/05 20:23:55 by pcatapan         ###   ########.fr       */
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

void    Contact::PrintInfoContact(){
    
    std::cout << name << std::endl;
    std::cout << surname << std::endl;
    std::cout << nickname << std::endl;
    std::cout << phoneNumber << std::endl;
    std::cout << darkestSecret << std::endl;
}
