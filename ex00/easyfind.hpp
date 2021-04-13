#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <list>
#include <array>
#include <vector>
#include <algorithm>

class BadArgumentException : public std::exception
{
	public:
		const char * what() const throw()
		{
			return "Not found element in container";
		}
};

template <typename T>
typename T::const_iterator easyfind(const T & con, const int & elem)
{
	typename T::const_iterator iter;
	iter = std::find(con.begin(), con.end(), elem);
	if (iter == con.end())
		throw BadArgumentException();
	return iter;
};

#endif
