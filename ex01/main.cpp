#include "Phonebook.hpp"

int	is_good_command(char *buff)
{
	std::string add;
	std::string search;
	std::string exit;

	add = "ADD";
	search = "SEARCH";
	exit = "EXIT";
	if (add.compare(buff) == 0)
		return 1;
	else if (search.compare(buff) == 0)
		return 2;
	else if (exit.compare(buff) == 0)
		return 3;
	else
		return 0;
}

int	main()
{
	Phonebook	phone(0);
	char	buff[1024];
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