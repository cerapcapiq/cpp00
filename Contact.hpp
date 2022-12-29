

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "main.hpp"

class Contact
{
	public:
		Contact();

		~Contact();

		void ft_display();
		void show_header();
		bool edit_info(int i);

	private:
		int i;
		std::string field[5];
		std::string info[5];

		enum Field{
		firstname = 0,
		lastname,
		nickname,
		phonenumber,
		darkestsecret,
};

#endif

