#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template <typename T1>
void func(T1 &value)
{
	std::cout << value << "\n";
}

template <typename T>
void iter(T *array, unsigned int len, void (*function)(const T &))
{
	if (!array)
		return ;
	for (int i = 0; i < len; i++)
	{
		function(array[i]);
	}
}

#endif