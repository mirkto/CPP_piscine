#ifndef ARRAY_HPP
# define ARRAY_HPP

# define CLR_GRN "\033[0;32m"
# define CLR_YLW "\033[0;33m"
# define CLR_BLU "\033[0;34m"
# define CLR_RED "\033[0;31m"
# define CLR_PRP "\033[0;35m"
# define CLR_END "\033[0m"

# include <iostream>
# include <string>

template <typename T>
class Array
{
private:
	int			_len;
	T			*_content;
public:
	Array() : _content(nullptr)
		{ _len = 0; }

	Array(int len)
	{
		if(len < 0)
			throw sizeError();
		this->_len = len;
		this->_content = new T[len];
	}

	virtual ~Array() { delete[] _content; }

	Array(Array const & src) { *this = src; }

	T			&operator=(Array const & src)
	{
		if (this == &src)
			return ;
		if(this->_len > 0)
			delete[] this->_content;
		this->_content = nullptr;
		if (src._len > 0)
		{
			this->_content = new T[src._len]();
			for (size_t i = 0; i < src._len; i++)
				this->_content[i] = src._content[i];
		}
		this->_len = src._len;
		return (*this);
	}
	
	class sizeError : public std::exception
	{
		const char*		what() const throw()
			{ return CLR_RED " -- Error: size out of range!" CLR_END; }
	};
	
	T&			operator[](int index)
	{
		if(index >= this->_len || index < 0)
			throw sizeError();
		return _content[index];
	}
	
	int			size() { return this->_len; }
};

#endif