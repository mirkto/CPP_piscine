#include "phonebook.hpp"


phonebook::phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 11; ++j)
			this->cont_list[i][j] = "empty";
	return ;
}

phonebook::~phonebook()
{
	std::cout << "Destructor called\n" << std::endl;
	return ;
}

void	phonebook::_add_one_field(std::string buff, std::string &tmp)
{
	std::cout << buff;
	std::getline(std::cin, tmp, '\n');
}

void	phonebook::_add_fields(int ind)
{
	this->_add_one_field("First name: ", cont_list[ind][0]);
	this->_add_one_field("Last name: ", cont_list[ind][1]);
	this->_add_one_field("Nickname: ", cont_list[ind][2]);
	this->_add_one_field("Login: ", cont_list[ind][3]);
	this->_add_one_field("Postal address: ", cont_list[ind][4]);
	this->_add_one_field("Email address: ", cont_list[ind][5]);
	this->_add_one_field("Phone number: ", cont_list[ind][6]);
	this->_add_one_field("Birthday date: ", cont_list[ind][7]);
	this->_add_one_field("Favorite meal: ", cont_list[ind][8]);
	this->_add_one_field("Underwear color: ", cont_list[ind][9]);
	this->_add_one_field("Darkest secret: ", cont_list[ind][10]);
}

void	phonebook::ft_add()
{
	std::string		tmp;

	system("clear");
	if (this->cont_list[7][0] != "empty")
		std::cout << CLR_YLW"--- phonebook is full ---"CLR_END;
	else
	{
		std::cout << CLR_GRN"________________\n"CLR_END;
		std::cout << CLR_GRN"Enter contact details:\n"CLR_END;
		for (int i = 0; i < 8; ++i)
			if (this->cont_list[i][0] == "empty")
			{
				this->_add_fields(i);
				break ;
			}
	}
	return ;
}

void	phonebook::_search_header(void)
{
	std::cout << CLR_GRN"________________\n"CLR_END;
	std::cout << CLR_GRN"list of contacts\n"CLR_END;
	std::cout << CLR_GRN"____________________";
	std::cout << "________________________\n";
	std::cout.setf(std::ios::right);
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|";
	std::cout << "\n"CLR_END;
	for (int i = 0; i < 8; ++i)
		if (this->cont_list[i][0] != "empty")
			this->_search_print_preview(i);
	std::cout.unsetf(std::ios::right);
}

void	phonebook::_search_print_oneline(std::string tmp)
{
	if (tmp.length() > 9)
	{
		tmp.resize(9);
		std::cout << std::setw(9) << tmp << ".|";
	}
	else
		std::cout << std::setw(10) << tmp << "|";
}

void	phonebook::_search_print_preview(int i)
{
	std::cout << std::setw(9) << '#' << i + 1 << "|";
	this->_search_print_oneline(cont_list[i][0]);
	this->_search_print_oneline(cont_list[i][1]);
	this->_search_print_oneline(cont_list[i][2]);
	std::cout << "\n"CLR_END;
}

void	phonebook::_search_print_contact(int ind)
{
	system("clear");
	std::cout << CLR_GRN"_________________\n"CLR_END;
	std::cout << CLR_GRN"Contact number #" << ind + 1 << CLR_END;
	std::cout << "\nFirst name: " << cont_list[ind][0] << std::endl;
	std::cout << "Last name: " << cont_list[ind][1] << std::endl;
	std::cout << "Nickname: " << cont_list[ind][2] << std::endl;
	std::cout << "Login: " << cont_list[ind][3] << std::endl;
	std::cout << "Postal address: " << cont_list[ind][4] << std::endl;
	std::cout << "Email address: " << cont_list[ind][5] << std::endl;
	std::cout << "Phone number: " << cont_list[ind][6] << std::endl;
	std::cout << "Birthday date: " << cont_list[ind][7] << std::endl;
	std::cout << "Favorite meal: " << cont_list[ind][8] << std::endl;
	std::cout << "Underwear color: " << cont_list[ind][9] << std::endl;
	std::cout << "Darkest secret: " << cont_list[ind][10];
}

void	phonebook::_search_wrong_input(int e)
{
	system("clear");
	if (e == 1)
		std::cout << CLR_YLW"--- contact is empty ---"CLR_END;
	else
		std::cout << CLR_YLW"--- wrong input ---\n"CLR_END;
}

int		phonebook::_search_loop_choice(int	num)
{
	if (num == 0)
	{
		system("clear");
		return (1);
	}
	if (0 < num && num < 9)
		if (this->cont_list[num - 1][0] != "empty")
		{
			this->_search_print_contact(num - 1);
			return (1);
		}
	this->_search_wrong_input(0);
	return (0);
}

void	phonebook::_search_loop(void)
{
	std::string		tmp;
	while (1)
	{
		this->_search_header();
		std::cout << "\nPls, enter a contact number or \"0\" for exit: \n";
		std::getline(std::cin, tmp, '\n');
		if (tmp.length() != 1)
			this->_search_wrong_input(0);
		else
			if (this->_search_loop_choice(tmp[0] - '0') == 1)
				break ;
	}
}

void	phonebook::ft_search()
{
	system("clear");
	if (this->cont_list[0][0] == "empty")
		std::cout << CLR_YLW"--- phonebook is empty ---"CLR_END;
	else
		this->_search_loop();
}
