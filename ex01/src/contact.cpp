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

void	Contact::PrintAllInfo(){
	std::cout << "Name : " << name << std::endl;
	std::cout << "Surname : " << surname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "Dark secret : " << darkestSecret << std::endl;
}