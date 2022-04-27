#include "Point.hpp"

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

Point::Point():_x(0), _y(0)
{
}

Point::Point(Point const &copy):_x(copy.getX()), _y(copy.getY())
{
}

Point::Point(const Fixed &x, const Fixed &y):_x(x), _y(y)
{

}

bool operator == (const Point &num1, const Point &num2)
{
	if (num1.getX() == num2.getX() && num1.getY() == num2.getY())
		return true;
	return false;

}

Point &Point::operator=(const Point &copy)
{
	return *this;
}

Point::~Point()
{

}