#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook(int nbr);
		~Phonebook(void);

		void	make_add(Contact contact);
		void	make_search(void);

	private:
		char	tab_contact[8];
		int		nbr_contact;
};

#endif