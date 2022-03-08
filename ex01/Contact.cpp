#include "Phonebook.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::set_contact(void)
{
	std::string	buff;

	std::cout << "First name :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	this->first_name = buff;
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	this->last_name = buff;
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	this->nickname = buff;
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	this->phone_number = buff;
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	this->darkest_secret = buff;
}

int		Contact::is_too_big(std::string str) const
{
	int	size;
	int	i;

	size = str.size();
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

void	Contact::print_all_contact(std::string str) const
{
	int	size;

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

void	Contact::get_contact(int contact_n) const
{
	std::cout << contact_n << "         |";
	this->print_all_contact(this->first_name);
	this->print_all_contact(this->last_name);
	this->print_all_contact(this->nickname);
	std::cout << std::endl;
	return ;
}

void	Contact::print_contact(void) const
{
	std::cout << "First name :" << std::endl << this->first_name << std::endl;
	std::cout << "Last name :" << std::endl << this->last_name << std::endl;
	std::cout << "Nickname :" << std::endl << this->nickname << std::endl;
	std::cout << "Phone number :" << std::endl << this->phone_number << std::endl;
	std::cout << "Darkest secret :" << std::endl << this->darkest_secret << std::endl;
}

Contact::~Contact(void)
{
	return ;
}
