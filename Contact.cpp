

#include "main.hpp"

std::string Contact::field[5] =
{
	"firstname",
	"lastname",
	"nickname",
	"phonenumber",
	"darkestsecret",
};

Contact::Contact()
{
	for (int i = firstname; i <= darkestsecret; i++)
		this->info[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::edit_info(int i)
{
	 this->i = i;
    for (int i = firstname; i <= darkestsecret; i++)
    {
        std::cout << Contact::field[i] << "\n";
        std::getline(std::cin, this->info[i]);

    }
    size_t LengthSize = 0;
    for (int i = firstname; i <= darkestsecret; i++)
        LengthSize += this->info[i].length();
    if (LengthSize == 0)
    {
        std::cout << "invalid !" << std::endl;
        return (false);
    }
    std::cout << "done" << std::endl;
    return (true);
}

void Contact::ft_display()
{
	std::cout << "contact " << this->i <<std::endl;
	for (int i = firstname; i <= darkestsecret; i++)
	{
		std::cout << Contact::field[i] << " : ";
		std::cout << this->info[i] << std::endl;
	}

}

void Contact::show_header()
{
	std::cout << "|" <<std::setw(10) << this->i;
	for (int i = firstname; i <= nickname; i++;)
	{
		std::cout << " | ";
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
}

