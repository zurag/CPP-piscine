#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(0), Fixed(10));
	Point c(Fixed(5), Fixed(5));
	Point point(Fixed(1), Fixed(6));
	if (bsp(a, b, c, point))
		std::cout <<  "Point is in triangle" << std::endl;
	else
		std::cout <<  "Point is not in triangle" << std::endl;
	return 0;
}
