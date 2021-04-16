#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#
#include <algorithm>
#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){};

		MutantStack(const MutantStack & right) : std::stack<T>(right){};

		MutantStack & operator=(const MutantStack & right)
		{
			this->c = right.c;
			return (*this);
		}

		virtual ~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); };

		iterator end() {return this->c.end(); };
};

#endif
