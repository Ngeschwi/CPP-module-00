#include "Phonebook.hpp"

Phonebook::Phonebook(int nbr) : nbr_contact(nbr)
{
	return ;
}

void	Phonebook::make_add(Contact contact)
{
	if (this->nbr_contact == 8)
		return ;
	this->nbr_contact++;
	this->tab_contact[this->nbr_contact] = contact;
	std::cout << "nbr_contact : " << this->nbr_contact << std::endl;
}

void	Phonebook::make_search(void)
{
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}