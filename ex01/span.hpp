#ifndef SPAN_HPP
#define SPAN_HPP


#include <exception>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _arr;
	public:
	Span();
	Span(unsigned int N);
	Span(const Span & right);

	void addNumber (const int & n);
	int shortestSpan() ;
	int longestSpan() ;
	void addNumber(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2);

	Span & operator=(Span const & right);

	class NoSpaceException : public std::exception
	{
		public:
			const char * what() const throw();
	};
	class NoEnoughElementsException : public std::exception
	{
		public:
			const char * what() const throw();
	};
};

#endif
