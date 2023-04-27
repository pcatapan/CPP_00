#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include "contact.hpp"

class PhoneBook{

	private:
		Contact contacts[8];
		int		numberContact;
		int		oldContact;
	
	public :
		void 		StartPhoneBook();
		std::string GetCommand();
		void		DelOldContact(int oldContact);
		void		AddContact();
		void		SearchContact();
		void		Exit();
};

#endif