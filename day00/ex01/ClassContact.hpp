#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iostream>
# include <unistd.h>
# include <string>
# include <iomanip>
# include <cstdlib>

class classContact
{
private:
	std::string	contact[11];
	std::string	inf[11];

public:
	classContact(void);
	~classContact();

	void			setField(int ind, std::string str);
	void			setInf(int ind, std::string str);
	std::string		getField(int ind);
	std::string		getInf(int ind);
	std::string		getInfField(int ind);

};

#endif
