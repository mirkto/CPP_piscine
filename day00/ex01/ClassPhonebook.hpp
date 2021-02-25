#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include <iostream>
# include <unistd.h>
# include <string>
# include <iomanip>
# include <cstdlib>
# include "ClassContact.hpp"

#define CLR_GRN "\033[0;32m"
#define CLR_YLW "\033[0;33m"
#define CLR_RED "\033[0;31m"
#define CLR_END "\033[0m"

class classPhonebook
{
private:
	classContact	cont_list[8];

	void	_add_one_field(int inf, int field);
	void	_add_fields(int ind);
	void	_search_print_oneline(std::string tmp);
	void	_search_print_preview(int i);
	void	_search_print_header(void);
	void	_search_print_contact(int i);
	int		_search_loop_choice(int num);
	void	_search_wrong_input(int e);
	void	_search_loop(void);

public:
	classPhonebook(void);
	~classPhonebook();

	void	ft_add();
	void	ft_search();

};

#endif