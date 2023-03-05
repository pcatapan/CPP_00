/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:50:06 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/05 20:32:53 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phoneBook.hpp"

void    PhoneBook::StartPhoneBook(){

    numberContact = 0;
    oldContact = 0;

    std::cout << "Hey! You can use me :"  << std::endl <<
        "- ADD [For added new contact]"  << std::endl <<
        "- SEARCH [For searched the contact]"  << std::endl <<
        "- EXIT [For close the PhoneBook]" << std::endl << std::endl;
}

std::string	PhoneBook::GetCommand(){
    std::string command;

    std::cout << "What can I do for you?" << std::endl;
    std::cin >> command;
    
    return command;
}

void    PhoneBook::DelOldContact(int oldContact){
    char    options;

    std::cout << "You have 8 contact, if you add a new contact delete the your oldest contact, "
            "this is your oldest contact :" << std::endl;
    contacts[oldContact].PrintInfoContact();

    std::cout << "Are you sure to delete the contact? Y or N" << std::endl;
    std::cin >> options;
    
    if (options == 'Y') {
        contacts[oldContact++].CreateContact();
        if (oldContact == 7){
            oldContact = 0;
        }
    }
}

void    PhoneBook::AddContact(){

    if (numberContact < 8){
        contacts[numberContact++].CreateContact();
    }
    else {
       DelOldContact(oldContact);
    }
}
