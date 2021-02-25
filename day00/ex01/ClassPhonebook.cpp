#include "ClassPhonebook.hpp"

classPhonebook::classPhonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

classPhonebook::~classPhonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	classPhonebook::_add_one_field(int inf, int field)
{
	std::string		tmp;

	std::cout << this->cont_list[field].getInf(inf);
	std::getline(std::cin, tmp, '\n');
	this->cont_list[field].setField(inf, tmp);
}

void	classPhonebook::_add_fields(int ind)
{
	for (int i = 0; i < 11; i++)
		this->_add_one_field(i, ind);
}

void	classPhonebook::ft_add()
{
	system("clear");
	if (this->cont_list[7].getField(0) != "empty")
		std::cout << CLR_YLW"--- phonebook is full ---"CLR_END;
	else
	{
		std::cout << CLR_GRN"________________\n"CLR_END;
		std::cout << CLR_GRN"Enter contact details:\n"CLR_END;
		for (int i = 0; i < 8; ++i)
			if (this->cont_list[i].getField(0) == "empty")
			{
				this->_add_fields(i);
				break ;
			}
	}
	return ;
}

void	classPhonebook::_search_print_oneline(std::string tmp)
{
	if (tmp.length() > 9)
	{
		tmp.resize(9);
		std::cout << std::setw(9) << tmp << ".|";
	}
	else
		std::cout << std::setw(10) << tmp << "|";
}

void	classPhonebook::_search_print_preview(int i)
{
	std::cout << std::setw(9) << '#' << i + 1 << "|";
	this->_search_print_oneline(this->cont_list[i].getField(0));
	this->_search_print_oneline(this->cont_list[i].getField(1));
	this->_search_print_oneline(this->cont_list[i].getField(2));
	std::cout << "\n"CLR_END;
}

void	classPhonebook::_search_print_header(void)
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
		if (this->cont_list[i].getField(0) != "empty")
			this->_search_print_preview(i);
	std::cout.unsetf(std::ios::right);
}

void	classPhonebook::_search_print_contact(int ind)
{
	system("clear");
	std::cout << CLR_GRN"_________________\n"CLR_END;
	std::cout << CLR_GRN"Contact number #" << ind + 1 << CLR_END;
	for (int i = 0; i < 11; i++)
		std::cout << std::endl << this->cont_list[ind].getInfField(i);
}

int		classPhonebook::_search_loop_choice(int	num)
{
	if (num == 0)
	{
		system("clear");
		return (1);
	}
	if (0 < num and num < 9)
		if (this->cont_list[num - 1].getField(0) != "empty")
		{
			this->_search_print_contact(num - 1);
			return (1);
		}
	this->_search_wrong_input(0);
	return (0);
}

void	classPhonebook::_search_wrong_input(int e)
{
	system("clear");
	if (e == 1)
		std::cout << CLR_YLW"--- contact is empty ---"CLR_END;
	else
		std::cout << CLR_YLW"--- wrong input ---\n"CLR_END;
}

void	classPhonebook::_search_loop(void)
{
	std::string		tmp;
	while (1)
	{
		this->_search_print_header();
		std::cout << "\nPls, enter a contact number or \"0\" for exit: \n";
		std::getline(std::cin, tmp, '\n');
		if (tmp.length() != 1)
			this->_search_wrong_input(0);
		else
			if (this->_search_loop_choice(tmp[0] - '0') == 1)
				break ;
	}
}

void	classPhonebook::ft_search()
{
	system("clear");
	if (this->cont_list[0].getField(0) == "empty")
		std::cout << CLR_YLW"--- phonebook is empty ---"CLR_END;
	else
		this->_search_loop();
}
