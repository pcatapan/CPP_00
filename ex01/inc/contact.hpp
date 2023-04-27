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
	void    PrintAllInfo();
	

};

#endif