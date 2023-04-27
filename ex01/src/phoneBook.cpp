#include "../inc/phoneBook.hpp"

void    PhoneBook::StartPhoneBook(){

    numberContact = 0;
    oldContact = 0;

    system("clear");
    std::cout << "Hey! You can use me :"  << std::endl <<
        "- ADD [For added new contact]"  << std::endl <<
        "- SEARCH [For searched the contact]"  << std::endl <<
        "- EXIT [For close the PhoneBook]" << std::endl <<
        "- HELP [For see the command]" << std::endl << std::endl;;
}

std::string	PhoneBook::GetCommand(){
    std::string command;

    std::cout << std::endl << "What can I do for you?" << std::endl;
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

    system("clear");
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
    int         index;
    
    i = 0;
    system("clear");
    if (numberContact == 0) {
        std::cout << "You dont'have contact, please add before serach contact" << std::endl;
        return ;
    }

    while (i < numberContact) {
        contacts[i].PrintInfoContact(i);
        i++;
    }
    std::cout << "Insert the index of the contact to search" << std::endl;
    std::cin >> index;

    if (index < numberContact && index >= 0) {
        contacts[index].PrintAllInfo();
    } else {
         std::cout << "This index is incorrect!" << std::endl;
    }
}

void    PhoneBook::Exit() {
    exit(1);
}
