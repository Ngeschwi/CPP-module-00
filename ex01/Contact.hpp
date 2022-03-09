#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include "Phonebook.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		set_contact(void);
		void		get_contact(int nbr_contact) const;
		int			is_too_big(std::string str) const;
		void		print_all_contact(std::string str) const;
		void		print_contact(void) const;

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
	
		void		setFirstName(std::string name);
		void		setLastName(std::string name);
		void		setNickname(std::string name);
		void		setPhone(std::string phone);
		void		setSecret(std::string secret);

	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif