#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include "Phonebook.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void	set_contact(void);
		void	get_contact(int nbr_contact) const;
		int		is_too_big(std::string str) const;
		void	print_all_contact(std::string str) const;
		void	print_contact(void) const;
	
	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif