#include "Span.hpp"


Span::Span(unsigned int const size):_maxSize(size), _vec()
{
}

int Span::longestSpan() const
{
	if(_vec.size() < 2)
		throw std::overflow_error("Too less numbers in Span");
	int max, min;
	
	std::vector<int>::const_iterator iter;
	iter = max_element(_vec.begin(), _vec.end());
	max = *iter;
	iter = min_element(_vec.begin(), _vec.end());
	min = *iter;
	return max - min;
}

int Span::shortestSpan() const
{
	if(_vec.size() < 2)
		throw std::overflow_error("Too less numbers in Span");
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator start = tmp.begin();
	int delta;
	delta = *(start + 1) - *start;
	start++;
	while (start != tmp.end() - 1)
	{
		if (*(start + 1) - *start < delta)
			delta = *(start + 1) - *start;
		start++;
	}
	return delta;
}

void Span::addNumber(int const value)
{
	if (_vec.size() == _maxSize)
		throw std::overflow_error("Store are full");
	_vec.push_back(value);
}

void Span::addNumberImproved\
(std::vector<int>::const_iterator start, 
std::vector<int>::const_iterator end)
{
	if (_vec.size() == _maxSize || (end - start) + _vec.size() > _maxSize)
		throw std::overflow_error("Store are full");
	copy(start, end, std::back_inserter(_vec));
}

Span::Span(Span const &copy):_maxSize(copy.getMaxSize()), _vec(copy.getVector())
{
}

Span &Span::operator=(Span const &copy)
{
	_maxSize = copy.getMaxSize();
	_vec = copy.getVector();
	return *this;
}

std::vector<int> Span::getVector() const
{
	return _vec;
}

unsigned int Span::getMaxSize() const
{
	return _maxSize;
}

Span::~Span()
{
}
