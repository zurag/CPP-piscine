#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _vec;
public:
	Span(unsigned int const size);
	Span(Span const &copy);
	std::vector<int> getVector() const;
	int shortestSpan() const;
	int longestSpan() const;
	unsigned int getMaxSize() const;
	void addNumber(int const value);
	void addNumberImproved\
	(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
	Span &operator=(Span const &copy);
	~Span();
};

#endif