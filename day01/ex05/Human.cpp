# include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string	Human::identify()
{
	return (this->_Brain.identify());
}

Brain	&Human::getBrain()
{
	return (this->_Brain);
}
