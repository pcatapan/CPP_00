/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:53:02 by pcatapan          #+#    #+#             */
/*   Updated: 2023/03/05 20:10:17 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phoneBook.hpp"

int	main(int argc, char **argv){
	
	PhoneBook PhoneBook;
	std::string command;
	
	(void)argv;
	if (argc != 1){
		std::cout << "Sorry Bro, this PhoneBook not required parms" << std::endl;
		return 0;
	}
	
	PhoneBook.StartPhoneBook();
	
	while (argc){
		
		command = PhoneBook.GetCommand();
		
		if (command == "ADD"){
			PhoneBook.AddContact();
		}
		else if (command == "SEARCH"){
			;//PhoneBook.SearchContact();
		}
		else if (command == "EXIT"){
			;//PhoneBook.Exit();
		}
		else{
			 std::cout << std::endl << "No Bro, this is not a my command!" << std::endl;
		}
	}
}
