#include "ClassPhonebook.hpp"

void	start_book(void)
{
	system("clear");
	std::cout << CLR_GRN"________________\n"CLR_END;
	std::cout << CLR_GRN"Wellcome in phonebook\n"CLR_END;
	usleep(500000);
}

void	exit_book(void)
{
	system("clear");
	std::cout << CLR_GRN"________________\n"CLR_END;
	std::cout << CLR_RED"Exiting the phonebook\n"CLR_END;
}

void	wrong_input(void)
{
	system("clear");
	std::cout << CLR_YLW"--- wrong input ---"CLR_END;
}

void	loop_menu(std::string *buff)
{
	std::cout << CLR_GRN"\n________________\n"CLR_END;
	std::cout << CLR_GRN"Contacts menu\n"CLR_END;
	std::cout << "#1 ADD - for add new contact\n";
	std::cout << "#2 SEARCH - for search contacts\n";
	std::cout << "#3 EXIT - for exit\n";
	std::cout << "Pls, enter your command: ";
	std::getline(std::cin, *buff, '\n');
}

int		main(void)
{
	classPhonebook		book;
	std::string		buff;

	start_book();
	while(1)
	{
		loop_menu(&buff);
		if (buff == "EXIT" or buff == "exit" or buff == "3")
			break ;
		else if (buff == "ADD" or buff == "add" or buff == "1")
			book.ft_add();
		else if (buff == "SEARCH" or buff == "search" or buff == "2")
			book.ft_search();
		else
			wrong_input();
	}
	exit_book();
	return (0);
}
