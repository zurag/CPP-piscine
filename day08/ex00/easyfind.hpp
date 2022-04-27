#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename Container>
typename Container::iterator  easyfind(Container &cont, int value_to_find)
{
	typename Container::iterator iter = std::find(cont.begin(), cont.end(), value_to_find);
    if (iter == cont.end())
        throw std::overflow_error("No occurrence is found");
	return iter;
}

#endif