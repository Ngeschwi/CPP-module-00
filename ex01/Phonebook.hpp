#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <stdio.h>
# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook(int nbr);
		~Phonebook(void);

		void	make_add(void);
		void	make_search(void);

	private:

		Contact contact[8];
		int		nbr_contact;
		int		index;
};

#endif