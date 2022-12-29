

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void ft_add();
		void ft_header();
		void ft_search();
	

	private:
		Contact Contact[8];
		int amount;
};

#endif
