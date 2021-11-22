#include "Phonebook.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::set_contact(void)
{
	std::cout << "First name :" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Last name :" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nickname:" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Phone number:" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> this->darkest_secret;
}

int		Contact::is_too_big(char *str) const
{
	int	size;
	int	i;

	size = strlen(str);
	if (size > 10)
	{
		i = 0;
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	return size;
}

void	Contact::print_all_contact(char *str, int contact_n) const
{
	int	size;

	std::cout << contact_n << "         |";
	size = is_too_big(str);
	if (size <= 10)
	{
		std::cout << str;
		size = 10 - size;
		while (size--)
			std::cout << " ";
	}
	std::cout << "|";
}

void	Contact::print_contact(void) const
{
	std::cout << "First name :" << std::endl << this->first_name << std::endl;
	std::cout << "Last name :" << std::endl << this->first_name << std::endl;
	std::cout << "Nickname :" << std::endl << this->first_name << std::endl;
	std::cout << "Phone number :" << std::endl << this->first_name << std::endl;
	std::cout << "Darkest secret :" << std::endl << this->first_name << std::endl;
}

void	Contact::get_contact(int contact_n) const
{
	this->print_all_contact(this->first_name, contact_n);
	this->print_all_contact(this->last_name, contact_n);
	this->print_all_contact(this->nickname, contact_n);
	this->print_all_contact(this->phone_number, contact_n);
	this->print_all_contact(this->darkest_secret, contact_n);
	std::cout << std::endl;
	return ;
}

Contact::~Contact(void)
{
	return ;
}
