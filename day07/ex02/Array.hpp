#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array
{
private:
	T *_array;
	unsigned int _len;
public:
	Array():_len(0), _array(0)
	{
	}
	
	Array(unsigned int len)
	{
		_len = len;
		_array = new T[len];
	}
	
	Array(Array const &copy)
	{
		_len = copy.size();
		_array = new T[_len];
		for (int i = 0; i < _len; i++)
			_array[i] = copy.getArrayElement(i);
	}
	
	Array &operator=(Array const &copy)
	{
		_len = copy.size();
		_array = new T[_len];
		for (int i = 0; i < _len; i++)
			_array[i] = copy.getArrayElement(i);
		return *this;
	}
	
	T &operator[](const int index)
	{
		if (index < 0 || index > _len)
			throw std::overflow_error("Index is out of bounds");
		return _array[index];
	}
	
	T getArrayElement(unsigned int index) const
	{
		return _array[index];
	}
	
	unsigned int size(void) const
	{
		return _len;
	}
	
	~Array()
	{
		if (_array)
		{
			if (_len > 0)
				delete []_array;
		}
	}
};

#endif