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
		
		if (command == "ADD" || command == "add"){
			PhoneBook.AddContact();
		}
		else if (command == "SEARCH" || command == "search"){
			PhoneBook.SearchContact();
		}
		else if (command == "EXIT" || command == "exit"){
			PhoneBook.Exit();
		}
		else if (command == "HELP" || command == "help"){
			PhoneBook.StartPhoneBook();
		}
		else{
			 std::cout << std::endl << "No Bro, this is not a my command!" << std::endl;
		}
	}
}
