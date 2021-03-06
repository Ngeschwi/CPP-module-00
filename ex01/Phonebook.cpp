#include "Phonebook.hpp"

Phonebook::Phonebook(int nbr) : nbr_contact(nbr), index(nbr)
{
	return ;
}

void	Phonebook::make_add(void)
{
	std::string confirm;
	std::string	buff;

	if (this->nbr_contact == 8)
	{
		std::cout << "The phonebook is full, do you want to repmlace the oldest contact : yes or no" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof())
			exit(0);
		confirm = buff;
		while (confirm.compare("yes") != 0)
		{
			if (confirm.compare("no") == 0)
				return ;
			std::cout << "The phonebook is full, do you want to repmlace the oldest contact : yes or no" << std::endl;
			std::getline(std::cin, buff);
			if (std::cin.eof())
				exit(0);
			confirm = buff;
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
	std::string	str_index;
	std::string	buff;
	const char	*const_index;
	int			index;
	int			i;

	i = 0;
	if (this->nbr_contact == 0)
	{
		std::cout << "Please enter a contact before search" << std::endl << std::endl;
		return ;
	}
	std::cout << "Index     |First name|Last name |Nickname  |" << std::endl;
	while (i < this->nbr_contact)
	{
		contact[i].get_contact(i);
		i++;
	}
	std::cout << "Please enter an index to see his informations" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	str_index = buff;
	const_index = str_index.c_str();
	index = atoi(const_index);
	if (str_index.size() != 1)
		index = -1;
	while (index > (this->nbr_contact - 1) || index < 0)
	{
		std::cout << "Please enter an index to see his informations" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof())
			exit(0);
		str_index = buff;
		const_index = str_index.c_str();
		index = atoi(const_index);
		if (str_index.size() != 1)
			index = -1;
	}
	std::cout << index << "coucou :" << std::endl;
	contact[index].print_contact();
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}