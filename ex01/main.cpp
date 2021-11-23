#include "Phonebook.hpp"

int	is_good_command(std::string buff)
{
	if (buff.find("ADD") == 0 && buff.size() == 3)
		return 1;
	else if (buff.find("SEARCH") == 0 && buff.size() == 6)
		return 2;
	else if (buff.find("EXIT") == 0 && buff.size() == 4)
		return 3;
	else
		return 0;
}

int	main()
{
	Phonebook	phone(0);
	std::string	buff;
	int		rtrn_cmd;

	while (1)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		std::cin >> buff;
		rtrn_cmd = is_good_command(buff);
		if (rtrn_cmd == 1)
			phone.make_add();
		else if (rtrn_cmd == 2)
			phone.make_search();
		else if (rtrn_cmd == 3)
			return 1;
	}	
	return 0;
}