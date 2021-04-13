#include "span.hpp"
#include <algorithm>
#include <vector>

Span::Span() : _N(0)
{
	
}

Span::Span(unsigned int N) : _N(N)
{

}

Span::Span(const Span & right) : _N(right._N)
{
	this->_arr.clear();
	this->_arr = right._arr;
}

Span & Span::operator=(const Span &right)
{
	if (this == &right)
		return (*this);
	this->_N = right._N;
	this->_arr.clear();
	this->_arr = right._arr;

	return *this;
}

void Span::addNumber(const int &n)
{
	if (this->_arr.size() >= this->_N)
		throw NoEnoughElementsException();
	this->_arr.push_back(n);
}

int Span::longestSpan()
{
	if (this->_arr.size() < 2)
		throw NoEnoughElementsException();
	return (std::abs(*std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end())));
}

int Span::shortestSpan()
{
	if (this->_arr.size() < 2)
		throw NoEnoughElementsException();

	std::sort(_arr.begin(), _arr.end());
	return (_arr[1] - _arr[0]);
}


void Span::addNumber(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2)
{
	while (t1 < t2)
	{
	if (_arr.size() == _N)
		throw NoSpaceException();
	_arr.push_back(*t1);
	t1++;
	}
}

const char * Span::NoEnoughElementsException::what() const throw()
{
	return "there is too few elements";
}

const char * Span::NoSpaceException::what() const throw()
{
	return "there is no space for newe element";
}
