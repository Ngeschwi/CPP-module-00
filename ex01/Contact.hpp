#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include "Phonebook.hpp"

class Contact
{
	public:
		Contact(void);
		~Contact(void);
	
	private:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;
};

#endif