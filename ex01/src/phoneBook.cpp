#include "../inc/phoneBook.hpp"

void    PhoneBook::StartPhoneBook(){

    numberContact = 0;
    oldContact = 0;

    std::cout << "Hey! You can use me :"  << std::endl <<
        "- ADD [For added new contact]"  << std::endl <<
        "- SEARCH [For searched the contact]"  << std::endl <<
        "- EXIT [For close the PhoneBook]" << std::endl <<
        "- HELP [For see the command]" << std::endl << std::endl;;
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
    contacts[oldContact].PrintInfoContact(oldContact);

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

void    PhoneBook::SearchContact(){
    std::string searchWord;
    std::string retry;
    int         i;
    
    i = 0;
    if (numberContact == 0) {
        std::cout << "You dont'have contact, please add before serach contact" << std::endl;
        return ;
    }
    std::cout << "Insert the name, lastname or nickname of the contact to search" << std::endl;
    std::cin >> searchWord;

    while (i < numberContact) {
        if (contacts[i].SearchChecker(searchWord)) {
            contacts[i].PrintInfoContact(i);
            break;
        }
        i++;
        if (i == 8) {
            std::cout << "Sorry bro, not found a contact with word : " << searchWord << std::endl;
	        std::cout << "Retry? (Y or N)" << std::endl;
            std::cin >> retry;
            if (retry == "Y") {
                std::cout << "Insert the name, lastname or nickname of the contact to search" << std::endl;
                std::cin >> searchWord;
                i = 0;
            }
        }
    }
}

void    PhoneBook::Exit() {
    exit(1);
}
