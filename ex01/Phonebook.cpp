#include "Phonebook.hpp"

Phonebook::Phonebook(int nbr) : nbr_contact(nbr)
{
	return ;
}

void	Phonebook::make_add(void)
{
	contact[this->nbr_contact].set_contact();
	if (this->nbr_contact == 8)
		return ;
	this->nbr_contact++;
}

void	Phonebook::make_search(void)
{
	int	i;
	int index;

	i = 0;
	if (this->nbr_contact == 0)
	{
		std::cout << "Please enter a contact before search" << std::endl << std::endl;
		return ;
	}
	std::cout << "Index     |First name|Last name |Nickname  |Phone nbr |Dark scrt " << std::endl;
	while (i < this->nbr_contact)
	{
		contact[i].get_contact(i);
		i++;
	}
	std::cout << "Please enter an index to see his informations" << std::endl;
	std::cin >> index;
	while (index > this->nbr_contact || index < 0)
	{
		std::cout << "Please enter an index to see his informations" << std::endl;
		std::cin >> index;
	}
	contact[index].print_contact();
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
