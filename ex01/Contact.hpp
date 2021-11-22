#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <stdio.h>
# include "Phonebook.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void	set_contact(void);
		void	get_contact(int nbr_contact) const;
		int		is_too_big(char *str) const;
		void	print_all_contact(char *str, int contact_n) const;
		void	print_contact(void) const;
	
	private:

		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;
};

#endif