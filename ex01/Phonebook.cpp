#include "Phonebook.hpp"

Phonebook::Phonebook(int nbr) : nbr_contact(nbr), index(nbr)
{
	return ;
}

void	Phonebook::make_add(void)
{
	std::string confirm;

	if (this->nbr_contact == 8)
	{
		std::cout << "The phonebook is full, do you want to repmlace the oldest contact : yes or no" << std::endl;
		std::cin >> confirm;
		while (confirm.find("yes") != 0 || confirm.size() != 3)
		{
			if (confirm.compare("no") == 0 && confirm.size() == 2)
				return ;
			std::cout << "The phonebook is full, do you want to repmlace the oldest contact : yes or no" << std::endl;
			std::cin >> confirm;
		}
		this->index = 0;
	}
	else
		this->nbr_contact++;
	contact[this->index].set_contact();
	this->index++;
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
	while (index > (this->nbr_contact - 1) || index < 0)
	{
		index = 0;
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