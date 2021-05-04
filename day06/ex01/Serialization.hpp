#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include "main.hpp"

class Serialization
{

public:
	Serialization();
	Serialization(Serialization const & src );
	virtual ~Serialization();

	Serialization &		operator=(Serialization const & rhs );

	std::string		randStr();
	void *			serialize(void);
	Data *			deserialize(void * raw);

private:
	Data *			_data;
	void *			_raw;

};

#endif