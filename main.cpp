

#include "main.hpp"

int main()
{
	std::string input;
	PhoneBook PhoneBook;

	while (std::getline(std::cin, input))
	{
		std::cout << "Please type ADD or SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
		{
			std::cout << "bye" << std::endl;
			exit(0);
		}
		else if (input == "ADD")
			ft_add();
		else if (input == "SEARCH")
			ft_search();
	}
	return (0);
}


