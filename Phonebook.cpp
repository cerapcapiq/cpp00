


#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}



void PhoneBook::ft_add()
{
	if (this->amount == 8)
		this->contact[this->amount == 1].edit_info(this->amount - 1);
	else if (this->contact[this->amount].edit_info(this->amount + 1))
			this->amount++;
}

void PhoneBook::ft_header()
{
	std::cout << "|   Index   | First name | Last name  | Nickname  |" <<std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contact[i].ft_
	

void PhoneBook::ft_search()
{
	int i;
	if (this->amount == 0)
		std::cout << "add contact" << std::endl;
	else
	{
		this->ft_header();
		std::cout << "type number of index" << std::endl;
		while (!(std::cin >> i ) || (i < 0 || i > this->amount))
		{
			std::cin.clear();
			std::cin>ignore();
			std::cout << " invalid ";
		}
		std::cin.ignore();
		if (i > 0)
			this->contact[i - 1].ft_display();
	}
}
