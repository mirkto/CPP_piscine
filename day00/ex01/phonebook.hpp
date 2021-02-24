#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <unistd.h>
# include <string>
# include <iomanip>
# include <cstdlib>

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

class phonebook
{
private:
	std::string	cont_list[8][11];

	void	_add_one_field(std::string buff, std::string &tmp);
	void	_add_fields(int ind);
	void	_search_header(void);
	void	_search_print_oneline(std::string tmp);
	void	_search_print_preview(int i);
	void	_search_print_contact(int i);
	void	_search_wrong_input(int e);
	int		_search_loop_choice(int num);
	void	_search_loop(void);

public:
	phonebook(void);
	~phonebook();

	void	ft_add();
	void	ft_search();

};

#endif